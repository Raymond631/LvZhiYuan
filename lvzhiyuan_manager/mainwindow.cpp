#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    serverIP="127.0.0.1";
    serverPORT=8888;
    sock=new QTcpSocket(this);
    sock->connectToHost(serverIP,serverPORT);
    QObject::connect(sock,SIGNAL(readyRead()),this,SLOT(recieveMessage()));

    ui->bar->setCurrentItem(0);//导航栏初始化
    ui->stackedWidget->setCurrentIndex(0);//定位首页
    ui->orderStatus->setCurrentIndex(0);//订单筛选框初始化
    ref=true;//一个补丁，避免刷新聊天列表时 激发refreshMessage导致访问空指针

    QTimer *timer = new QTimer(this);//计时器
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(setTimeLabel()));
    timer->start(1000);//1秒刷新一次
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::receivemain()
{
    this->show();
}
void MainWindow::on_bar_currentRowChanged(int currentRow)
{
    ui->stackedWidget->setCurrentIndex(currentRow);
}
void MainWindow::setTimeLabel()
{
    QString dt=QDateTime::currentDateTime().toString("yyyy年MM月dd日 hh:mm:ss");
    ui->timeLabel->setText(dt);
}
void MainWindow::setWelcome()
{
    QString s=QString("尊敬的<font style='font-style:oblique;text-decoration:underline;color:green;'>%1</font>,欢迎使用绿之源").arg(userNameNow);
    ui->welcome->setText(s);
}

//与服务器通信
void MainWindow::sendMessage(QString id, QJsonArray sql)
{
    QJsonObject sqljson;
    sqljson.insert("id",id);
    sqljson.insert("sql",sql);
    QJsonDocument docum;
    docum.setObject(sqljson);
    QByteArray arr = docum.toJson(QJsonDocument::Compact);

    QByteArray header;
    header.prepend(QString("fileType:message,fileName:null,fileSize:%1;").arg(sqljson.size()).toUtf8());
    header.resize(128);
    arr.prepend(header);

    QDataStream socketStream(sock);//数据流
    socketStream.setVersion(QDataStream::Qt_6_3);
    socketStream <<arr;
}
void MainWindow::recieveMessage()
{
    if(sock->bytesAvailable()>0)
    {
        QDataStream socketStream(sock);
        socketStream.setVersion(QDataStream::Qt_6_3);
        socketStream.startTransaction();
        QByteArray arr;
        socketStream >> arr;

        if(!socketStream.commitTransaction())
        {
            return;
        }
        QString header = arr.mid(0,128);
        QString fileType = header.split(",")[0].split(":")[1];
        arr = arr.mid(128);

        QJsonParseError jsonError;
        QJsonDocument doucm = QJsonDocument::fromJson(arr, &jsonError);
        if (!doucm.isNull() && (jsonError.error == QJsonParseError::NoError))
        {
            QJsonObject rootObject = doucm.object();

            //rootObject含2个值，id-QString,res-QJsonObject

            QJsonValue value1 = rootObject.value("id");
            QJsonValue value2 = rootObject.value("res");
            QString strID = value1.toString();
            QJsonObject subObject =value2.toObject();

            if(strID=="login")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                emit responseToLogin(isSuccessful);
            }
            else if(strID=="signUpDetect")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                emit responseToSignDetection(isSuccessful);
            }
            else if(strID=="signUp")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                emit responseToSignUp(isSuccessful);
            }
            else if(strID=="refreshNotice")
            {
                QJsonValue value3 = subObject.value("title");
                QJsonValue value4 = subObject.value("content");
                QString title=value3.toString();
                QString content=value4.toString();
                responseRefreshNotice(title,content);
            }
            else if(strID=="refreshFruit")
            {
                QJsonValue value3 = subObject.value("nRow");
                QJsonValue value4 = subObject.value("table");
                int r=value3.toInt();
                QJsonArray table = value4.toArray();
                responseRefreshFruit(r,table);
            }
            else if(strID=="saveNotice")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                responseSaveNotice(isSuccessful);
            }
            else if(strID=="deletion")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                responseDeletion(isSuccessful);
            }
            else if(strID=="search")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                if(!isSuccessful)
                    responseSearch();
                else
                {
                    QJsonValue value3 = subObject.value("nRow");
                    QJsonValue value4 = subObject.value("table");
                    int r=value3.toInt();
                    QJsonArray table = value4.toArray();
                    responseSearch(r,table);
                }
            }
            else if(strID=="saveFruit")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                responseSaveFruit(isSuccessful);
            }
            else if(strID=="searchOrder")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                if(!isSuccessful)
                    responseSearchOrder();
                else
                {
                    QJsonValue value4 = subObject.value("row");
                    QJsonValue value5 = subObject.value("table");
                    int r=value4.toInt();
                    QJsonArray table = value5.toArray();
                    responseSearchOrder(r,table);
                }
            }
            else if(strID=="send")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                responseSend(isSuccessful);
            }
            else if(strID=="savePersonInfo")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                responseSavePersonInfo(isSuccessful);
            }
            else if(strID=="refreshUserInfo")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                if(!isSuccessful)
                    responseRefreshUserInfo();
                else
                {
                    QJsonValue value4 = subObject.value("userInformation");
                    QJsonArray UserInfo =value4.toArray();

                    QString u=UserInfo.at(0).toString();
                    QString p=UserInfo.at(1).toString();
                    QString ph=UserInfo.at(2).toString();
                    QString a=UserInfo.at(3).toString();
                    responseRefreshUserInfo(u,p,ph,a);
                }
            }
            else if(strID=="refreshChat")
            {
                QJsonValue value3 = subObject.value("chatUser");
                QJsonArray chatUser =value3.toArray();
                if(chatUser.count()!=0)
                {
                    responseRefreshChat(chatUser);
                }
            }
            else if(strID=="refreshMessage")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                if(isSuccessful)
                {
                    QJsonValue value4 = subObject.value("row");
                    QJsonValue value5 = subObject.value("table");
                    int r=value4.toInt();
                    QJsonArray table = value5.toArray();
                    responseRefreshMessage(r,table);
                }
            }
            else if(strID=="chatSend")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                responseChatSend(isSuccessful);
            }
            else if(strID=="insertImage")
            {
                QJsonValue value3 = subObject.value("isSuccessful");
                bool isSuccessful=value3.toBool();
                if(isSuccessful)
                    QMessageBox::information(NULL,"","上传成功！");
                else
                    QMessageBox::warning(NULL,"","上传失败！");
            }
        }
        else
        {
            QMessageBox::warning(NULL,"","json解码异常！");
        }
    }
}


//连锁加载函数：个人信息 公告栏 水果管理 订单管理 客服中心
void MainWindow::refreshUserInfo(QString u)//加载个人信息
{
    QString s=QString("select * from user where username = '%1'").arg(u);
    QJsonArray arrSQL;
    arrSQL.append(s);
    sendMessage("refreshUserInfo",arrSQL);

    userNameNow=u;//赋给全局变量userNameNow
    setWelcome();//首页欢迎框
}
void MainWindow::responseRefreshUserInfo()
{
    QMessageBox::warning(NULL,"","用户信息拉取失败！请联系技术人员");
    ui->passwordValue->setReadOnly(true);
    ui->passwordValue_2->setReadOnly(true);
    ui->phoneValue->setReadOnly(true);
    ui->addressValue->setReadOnly(true);

    refreshNotice();//连锁加载公告、水果、和订单，防止粘包
}
void MainWindow::responseRefreshUserInfo(QString u, QString p, QString ph, QString a)
{
    ui->usernameValue->setText(u);
    ui->passwordValue->setText(p);
    ui->passwordValue_2->setText(p);
    ui->phoneValue->setText(ph);
    ui->addressValue->setText(a);

    ui->passwordValue->setReadOnly(true);
    ui->passwordValue_2->setReadOnly(true);
    ui->phoneValue->setReadOnly(true);
    ui->addressValue->setReadOnly(true);

    refreshNotice();//连锁加载公告、水果、和订单，防止粘包
}


//公告管理
void MainWindow::refreshNotice()//加载公告
{
    QString s=QString("select * from notice");
    QJsonArray arrSQL;
    arrSQL.append(s);
    sendMessage("refreshNotice",arrSQL);
}
void MainWindow::responseRefreshNotice(QString title, QString content)
{
    ui->titleValue->setText(title);
    ui->contentValue->setText(content);
    ui->titleValue->setReadOnly(true);
    ui->contentValue->setReadOnly(true);

    refreshFruit();//加载水果管理信息
}
void MainWindow::on_editNotice_clicked()
{
    ui->titleValue->setReadOnly(false);
    ui->contentValue->setReadOnly(false);
}
void MainWindow::on_clear_clicked()
{
    ui->titleValue->clear();
    ui->contentValue->clear();
}
void MainWindow::on_save_clicked()
{
    QString t,c,dt;
    t=ui->titleValue->text();
    c=ui->contentValue->toPlainText();
    dt=QDateTime::currentDateTime().toString("yyyy年MM月dd日 hh:mm:ss");
    QString s=QString("insert into notice (title,content,time) values ('%1','%2','%3')").arg(t).arg(c).arg(dt);
    QJsonArray arrSQL;
    arrSQL.append(s);
    sendMessage("saveNotice",arrSQL);
}
void MainWindow::responseSaveNotice(bool isSuccessful)
{
    if(isSuccessful)
    {
        QMessageBox::information(this,"","发布成功");
        ui->titleValue->setReadOnly(true);
        ui->contentValue->setReadOnly(true);
    }
    else
        QMessageBox::warning(NULL,"","发布失败！");
}


//水果管理
void MainWindow::refreshFruit()//加载水果
{
    QString s=QString("select * from fruit");
    QJsonArray arrSQL;
    arrSQL.append(s);
    sendMessage("refreshFruit",arrSQL);
}
void MainWindow::responseRefreshFruit(int r, QJsonArray table)
{
    int i = 0, j = 0, nCol;
    nCol = ui->FruitTable->columnCount();
    nRow = r;
    ui->FruitTable->setRowCount(nRow);
    while(j<nRow)
    {
        QJsonValue tempRow=table.at(j);
        QJsonArray temp = tempRow.toArray();
        for (i = 0; i<nCol-1; i++)//nCol-1留给复选框
        {
            QJsonValue tempCol=temp.at(i);
            QString s=tempCol.toString();
            ui->FruitTable->setItem(j, i, new QTableWidgetItem(s));
            if(i==0)
            {
                ui->FruitTable->item(j,i)->setFlags(Qt::NoItemFlags);
            }
        }
        QTableWidgetItem *checkBox = new QTableWidgetItem();//添加多选框
        checkBox->setCheckState(Qt::Unchecked);
        ui->FruitTable->setItem(j,nCol-1, checkBox);
        j++;
    }
    changedrow.clear();
    choosedrow.clear();
    ui->FruitTable->scrollToBottom();

    on_searchOrder_clicked();//加载订单
}
void MainWindow::on_FruitTable_cellChanged(int row, int column)
{
    //保存被修改的行的行号
    QString s;
    s.setNum(row);
    bool temp=true;
    for(QString e:changedrow)//重复数据不保存
    {
        if(e==s)
            temp=false;
    }
    if(temp)
    {
        changedrow<<s;
    }


    //保存被选中的行的编号
    if(ui->FruitTable->item(row, 0)!=NULL)//排除新添加的行
    {
        if(ui->FruitTable->item(row, column)->checkState() == Qt::Checked)
        {
            choosedrow<<ui->FruitTable->item(row, 0)->text();
        }
        else//剔除取消勾选的行的编号
        {
            QString s=ui->FruitTable->item(row, 0)->text();
            int i;
            bool temp=false;
            for(i=0;i<choosedrow.length();i++)//找是否存在非勾选的编号，找到则返回数组下标
            {
                if(choosedrow[i]==s)
                {
                    temp=true;
                    break;
                }
            }
            if(temp)
            {
                choosedrow.removeAt(i);
            }
        }
    }
}
void MainWindow::on_deletion_clicked()
{
    if(!choosedrow.empty())
    {
        QJsonArray arrSQL;
        for(QString e:choosedrow)
        {
            QString s=QString("delete from fruit where number='%1'").arg(e);
            arrSQL.append(s);
        }
        sendMessage("deletion",arrSQL);
    }
    else
    {
        QMessageBox::warning(NULL,"","未选中任何水果！");
    }
}
void MainWindow::responseDeletion(bool isSuccessful)
{
    if(isSuccessful)
    {
        QMessageBox::information(NULL,"","删除成功");
    }
    else
    {
        QMessageBox::warning(NULL,"","删除失败！");
    }
    refreshFruit();
    choosedrow.clear();
}
void MainWindow::on_search_clicked()
{
    QString s=ui->searchKey->text();
    if(s=="")
    {
        refreshFruit();
    }
    else
    {
        QString sql=QString("select * from fruit where name = '%1'").arg(s);
        QJsonArray arrSQL;
        arrSQL.append(sql);
        sendMessage("search",arrSQL);
    }
}
void MainWindow::responseSearch()
{
    QMessageBox::warning(NULL,"","库存中没有该水果，请重新输入！");
    ui->searchKey->clear();
    refreshFruit();
}
void MainWindow::responseSearch(int r, QJsonArray table)
{
    int i = 0, j = 0, nCol;
    nCol = ui->FruitTable->columnCount();
    nRow = r;
    ui->FruitTable->setRowCount(nRow);
    while(j<nRow)
    {
        QJsonValue tempRow=table.at(j);
        QJsonArray temp = tempRow.toArray();
        for (i = 0; i<nCol-1; i++)//nCol-1留给复选框
        {
            QJsonValue tempCol=temp.at(i);
            QString s=tempCol.toString();
            ui->FruitTable->setItem(j, i, new QTableWidgetItem(s));
            if(i==0)
            {
                ui->FruitTable->item(j,i)->setFlags(Qt::NoItemFlags);
            }
        }
        QTableWidgetItem *checkBox = new QTableWidgetItem();//添加多选框
        checkBox->setCheckState(Qt::Unchecked);
        ui->FruitTable->setItem(j,nCol-1, checkBox);
        j++;
    }
    changedrow.clear();
    choosedrow.clear();
}
void MainWindow::on_addtion_clicked()
{
    ui->FruitTable->setRowCount(nRow+1);

    QTableWidgetItem *checkBox = new QTableWidgetItem();//添加多选框
    checkBox->setCheckState(Qt::Unchecked);
    int co = ui->FruitTable->columnCount();
    ui->FruitTable->setItem(nRow,co-1, checkBox);
    ui->FruitTable->setItem(nRow,0, new QTableWidgetItem("自动添加"));//防止出现保存时出现空指针
}
void MainWindow::on_saveFruit_clicked()
{
    QString id,item1,item2,item3,item4,item7,item8;
    double item5;
    int item6;
    QString sql1,sql2,sql3;
    QJsonArray arrSQL;
    for(QString e:changedrow)
    {
        if(ui->FruitTable->item(e.toInt(),0)->flags()==Qt::NoItemFlags)//修改行
        {
            id=ui->FruitTable->item(e.toInt(),0)->text();
            item1=ui->FruitTable->item(e.toInt(),1)->text();
            item2=ui->FruitTable->item(e.toInt(),2)->text();
            item3=ui->FruitTable->item(e.toInt(),3)->text();
            item4=ui->FruitTable->item(e.toInt(),4)->text();
            item5=ui->FruitTable->item(e.toInt(),5)->text().toDouble();//价格,double
            item6=ui->FruitTable->item(e.toInt(),6)->text().toInt();//销量,int
            item7=ui->FruitTable->item(e.toInt(),7)->text();
            item8=QDateTime::currentDateTime().toString("yyyy年MM月dd日 hh:mm:ss");

            sql1=QString("delete from fruit where number='%1'").arg(id);
            sql2=QString("insert into fruit (name,picture,sort,origin,price,sale,stock,changeTime) values('%1','%2','%3','%4','%5','%6','%7','%8')").arg(item1).arg(item2).arg(item3).arg(item4).arg(item5).arg(item6).arg(item7).arg(item8);

            arrSQL.append(sql1);
            arrSQL.append(sql2);
        }
        else//新增行
        {
            item1=ui->FruitTable->item(nRow,1)->text();
            item2=ui->FruitTable->item(nRow,2)->text();
            item3=ui->FruitTable->item(nRow,3)->text();
            item4=ui->FruitTable->item(nRow,4)->text();
            item5=ui->FruitTable->item(nRow,5)->text().toDouble();//价格,double
            item6=ui->FruitTable->item(nRow,6)->text().toInt();//销量,int
            item7=ui->FruitTable->item(nRow,7)->text();
            item8=QDateTime::currentDateTime().toString();
            sql3=QString("insert into fruit (name,picture,sort,origin,price,sale,stock,changeTime) values('%1','%2','%3','%4','%5','%6','%7','%8')").arg(item1).arg(item2).arg(item3).arg(item4).arg(item5).arg(item6).arg(item7).arg(item8);
            arrSQL.append(sql3);
        }
    }
    sendMessage("saveFruit",arrSQL);
}
void MainWindow::responseSaveFruit(bool isSuccessful)
{
    if(isSuccessful)
    {
        QMessageBox::information(NULL,"","操作成功！");
    }
    else
    {
        QMessageBox::warning(NULL,"","操作异常！请联系技术人员");
    }
    refreshFruit();
    choosedrow.clear();
    changedrow.clear();
}
void MainWindow::on_insertImage_clicked()//上传图片
{
    QString s=ui->lineEdit->text();//水果编号

    QString filePath = QFileDialog::getOpenFileName(this, "选择图片", "/", "File (*.png *.jpg *.jpeg)");
    QDataStream socketStream(sock);
    socketStream.setVersion(QDataStream::Qt_6_3);

    QFile m_file(filePath);
    m_file.open(QIODevice::ReadOnly);
    QFileInfo fileInfo(m_file.fileName());
    QString fileName(fileInfo.fileName());
    QByteArray header;
    header.prepend(QString("fileType:attachment,fileName:%1,fileSize:%2;").arg(fileName).arg(s).toUtf8());
    header.resize(128);

    QByteArray byteArray = m_file.readAll();
    byteArray.prepend(header);

    socketStream << byteArray;
}


//订单管理
void MainWindow::on_searchOrder_clicked()//加载订单
{
    QJsonArray arrSQL;
    QString s=ui->orderStatus->currentText();
    QString sql=QString("select * from ordering where status = '%1'").arg(s);
    if(s=="全部订单")
        sql=QString("select * from ordering");
    arrSQL.append(sql);
    sendMessage("searchOrder",arrSQL);
}
void MainWindow::responseSearchOrder()
{
    QMessageBox::warning(NULL,"","无该类订单！");

    on_refreshChat_clicked();//加载最新联系客服的用户列表
}
void MainWindow::responseSearchOrder(int r, QJsonArray table)
{
    int i = 0, j = 0, row,col;
    col = ui->orderTable->columnCount();
    row = r;
    ui->orderTable->setRowCount(row);
    while(j<row)
    {
        QJsonValue tempRow=table.at(j);
        QJsonArray temp = tempRow.toArray();
        for (i = 0; i<col-1; i++)//nCol-1留给复选框
        {
            QJsonValue tempCol=temp.at(i);
            QString s=tempCol.toString();
            ui->orderTable->setItem(j, i, new QTableWidgetItem(s));
            if(i==0)
            {
                ui->orderTable->item(j,i)->setFlags(Qt::NoItemFlags);
            }
        }
        QTableWidgetItem *checkBox = new QTableWidgetItem();//添加多选框
        checkBox->setCheckState(Qt::Unchecked);
        ui->orderTable->setItem(j,col-1, checkBox);
        j++;
    }
    choosedrow.clear();
    ui->orderTable->scrollToBottom();

    on_refreshChat_clicked();//加载最新联系客服的用户列表
}
void MainWindow::on_orderTable_cellChanged(int row, int column)
{
    if(ui->orderTable->item(row, column)->checkState() == Qt::Checked)
    {
        choosedrow<<ui->orderTable->item(row, 0)->text();
    }
    else//剔除取消勾选的行的编号
    {
        QString s=ui->orderTable->item(row, 0)->text();
        int i;
        bool temp=false;
        for(i=0;i<choosedrow.length();i++)//找是否存在非勾选的编号，找到则返回数组下标
        {
            if(choosedrow[i]==s)
            {
                temp=true;
                break;
            }
        }
        if(temp)
        {
            choosedrow.removeAt(i);
        }
    }
}
void MainWindow::on_send_clicked()
{
    if(!choosedrow.empty())
    {
        QJsonArray arrSQL;
        for(QString e:choosedrow)
        {
            QString s=QString("update ordering set status = '已配送订单' where id='%1'").arg(e);
            arrSQL.append(s);
        }
        sendMessage("send",arrSQL);
    }
    else
    {
        QMessageBox::warning(NULL,"","未选中任何订单！");
    }
}
void MainWindow::responseSend(bool isSuccessful)
{
    if(isSuccessful)
    {
        QMessageBox::information(NULL,"","操作成功！");
    }
    else
    {
        QMessageBox::warning(NULL,"","ERROR！请联系技术人员");
    }
    on_searchOrder_clicked();
    choosedrow.clear();
}


//客服中心
void MainWindow::on_refreshChat_clicked()
{
    QString s=QString("select * from chat where reciever = '管理员' order by id desc limit 100");
    QJsonArray arrSQL;
    arrSQL.append(s);
    sendMessage("refreshChat",arrSQL);
}
void MainWindow::responseRefreshChat(QJsonArray arr)
{
    while (ui->meseagebar->count() > 0)
    {
        QListWidgetItem *item = ui->meseagebar->takeItem(0);
        delete item;
        ref=false;//一个补丁，避免刷新聊天列表时 激发refreshMessage导致访问空指针;
    }

    QList<QString> userList;
    QString temp;
    int num=arr.count();

    for(int i=0;i<num;i++)
    {
        temp=arr.at(i).toString();
        userList<<temp;
    }
    ui->meseagebar->addItems(userList);
    ref=true;
}
void MainWindow::on_meseagebar_currentRowChanged(int currentRow)
{
    if(ref)//一个补丁，避免刷新聊天列表时 激发refreshMessage导致访问空指针;
    {
        currentUser=currentRow;
        refreshMessage(currentRow);
    }
}
void MainWindow::refreshMessage(int x)
{
    QString username=ui->meseagebar->item(x)->text();
    QString sql=QString("select * from chat where sender = '%1' or reciever = '%1' order by id desc limit 20").arg(username);
    QJsonArray arrSQL;
    arrSQL.append(sql);
    sendMessage("refreshMessage",arrSQL);
}
void MainWindow::responseRefreshMessage(int r, QJsonArray table)
{
    contentDisplay.clear();
    QString time,sender,content;
    for(int i=r-1;i>=0;i--)
    {
        QJsonValue tempRow=table.at(i);
        QJsonArray temp = tempRow.toArray();

        time=temp.at(0).toString();
        sender=temp.at(1).toString();
        content=temp.at(2).toString();

        QString temp1=QString("<font style='font-size:18px;text-decoration:underline;color:green;'>%1  %2</font><br>").arg(sender).arg(time);
        QString temp2=QString("<font style='font-size:20px;font-family:宋体;'>%1</font><br>").arg(content);
        QString temp3=temp1+temp2;
        contentDisplay.append(temp3);
    }
    ui->textBrowser->setText(contentDisplay);
    ui->textBrowser->moveCursor(QTextCursor::End);//滚动条定位到最下方
}
void MainWindow::on_chatSend_clicked()
{
    QString time=QDateTime::currentDateTime().toString("yyyy年MM月dd日 hh:mm:ss");
    QString sender=userNameNow;
    QString reciever=ui->meseagebar->item(currentUser)->text();
    QString content=ui->chatInput->toPlainText();

    QString sql=QString("insert into chat (time,sender,reciever,content) values ('%1','%2','%3','%4')").arg(time).arg(sender).arg(reciever).arg(content);
    QJsonArray arrSQL;
    arrSQL.append(sql);
    sendMessage("chatSend",arrSQL);
}
void MainWindow::responseChatSend(bool isSuccessful)
{
    if(isSuccessful)
    {
        refreshMessage(currentUser);
        ui->chatInput->clear();
    }
    else
    {
        QMessageBox::warning(NULL,"","发送失败！");
    }
}


//个人中心
void MainWindow::on_editPersonInfo_clicked()
{
    ui->passwordValue->setReadOnly(false);
    ui->passwordValue_2->setReadOnly(false);
    ui->phoneValue->setReadOnly(false);
    ui->addressValue->setReadOnly(false);
}
void MainWindow::on_savePersonInfo_clicked()
{
    QString user,pwd1,pwd2,pho,adr,identity;
    user=ui->usernameValue->text();
    pwd1=ui->passwordValue->text();
    pwd2=ui->passwordValue_2->text();
    pho=ui->phoneValue->text();
    adr=ui->addressValue->text();
    identity="管理员";

    if(pwd1==pwd2)
    {
        QString s1=QString("delete from user where username='%1'").arg(user);
        QString s2=QString("insert into user (username,password,phone,address,identity) values ('%1','%2','%3','%4','%5')").arg(user).arg(pwd1).arg(pho).arg(adr).arg(identity);
        QJsonArray arrSQL;
        arrSQL.append(s1);
        arrSQL.append(s2);
        sendMessage("savePersonInfo",arrSQL);
    }
    else
    {
        QMessageBox::warning(NULL,"","输入的密码不相同，请重新输入！");
        ui->passwordValue->clear();
        ui->passwordValue_2->clear();
    }
}
void MainWindow::responseSavePersonInfo(bool isSuccessful)
{
    if(isSuccessful)
    {
        QMessageBox::information(NULL,"","修改成功！");
        ui->passwordValue->setReadOnly(true);
        ui->passwordValue_2->setReadOnly(true);
        ui->phoneValue->setReadOnly(true);
        ui->addressValue->setReadOnly(true);
    }
    else
    {
        QMessageBox::warning(NULL,"","修改异常！请联系技术人员");
    }
}
void MainWindow::on_logout_clicked()
{
    emit showlogin();
    this->close();
}
