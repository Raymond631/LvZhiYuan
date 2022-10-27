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
void MainWindow::setMoney()
{
    int rowCart=ui->cartTable->rowCount();
    int perMoney=0;
    int allMoney=0;
    for(int i=0;i<rowCart;i++)
    {
        perMoney=ui->cartTable->item(i,3)->text().toDouble();
        allMoney+=perMoney;
    }
    QString m=QString("总金额: <font style='color:red;'>%1元</font>").arg(allMoney);
    ui->money->setText(m);
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

        if(fileType=="attachment")//图片附件
        {
            toLoadImage(arr);
        }
        else if(fileType=="message")//普通sql消息
        {
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
                    QJsonValue value5 = subObject.value("noticeTime");
                    QString title=value3.toString();
                    QString content=value4.toString();
                    QString nT=value5.toString();
                    responseRefreshNotice(title,content,nT);
                }
                else if(strID=="mySearchOrder")
                {
                    QJsonValue value3 = subObject.value("isSuccessful");
                    bool isSuccessful=value3.toBool();
                    if(isSuccessful)
                    {
                        QJsonValue value4 = subObject.value("row");
                        QJsonValue value5 = subObject.value("table");
                        int r=value4.toInt();
                        QJsonArray table = value5.toArray();
                        responseSearchOrder(r,table);
                    }
                    else
                    {
                        ui->orderTable->setRowCount(0);
                    }
                }
                else if(strID=="send")
                {
                    QJsonValue value3 = subObject.value("isSuccessful");
                    bool isSuccessful=value3.toBool();
                    responseReceipt(isSuccessful);
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
                else if(strID=="refreshCart")
                {
                    QJsonValue value3 = subObject.value("isSuccessful");
                    bool isSuccessful=value3.toBool();
                    if(isSuccessful)
                    {
                        QJsonValue value4 = subObject.value("row");
                        QJsonValue value5 = subObject.value("table");
                        int r=value4.toInt();
                        QJsonArray table = value5.toArray();
                        responseRefreshCart(r,table);
                    }
                    else
                    {
                        ui->cartTable->setRowCount(0);
                    }
                }
                else if(strID=="deleteCart")
                {
                    QJsonValue value3 = subObject.value("isSuccessful");
                    bool isSuccessful=value3.toBool();
                    responseDeleteCart(isSuccessful);
                }
                else if(strID=="submitCart")
                {
                    QJsonValue value3 = subObject.value("isSuccessful");
                    bool isSuccessful=value3.toBool();
                    responseSubmitCart(isSuccessful);
                }
                else if(strID=="refreshFavorites")
                {
                    QJsonValue value3 = subObject.value("isSuccessful");
                    bool isSuccessful=value3.toBool();
                    if(isSuccessful)
                    {
                        QJsonValue value4 = subObject.value("row");
                        QJsonValue value5 = subObject.value("table");
                        int r=value4.toInt();
                        QJsonArray table = value5.toArray();
                        responseRefreshFavorites(r,table);
                    }
                    else
                    {
                        ui->favoritesTable->setRowCount(0);
                    }
                }
                else if(strID=="deleteFavorites")
                {
                    QJsonValue value3 = subObject.value("isSuccessful");
                    bool isSuccessful=value3.toBool();
                    responseDeleteFavorites(isSuccessful);
                }
                else if(strID=="chatSend")
                {
                    QJsonValue value3 = subObject.value("isSuccessful");
                    bool isSuccessful=value3.toBool();
                    responseChatSend(isSuccessful);
                }
                else if(strID=="loadChat")
                {
                    QJsonValue value3 = subObject.value("isSuccessful");
                    bool isSuccessful=value3.toBool();
                    if(isSuccessful)
                    {
                        QJsonValue value4 = subObject.value("row");
                        QJsonValue value5 = subObject.value("table");
                        int r=value4.toInt();
                        QJsonArray table = value5.toArray();
                        responseLoadChat(r,table);
                    }
                }
                else if(strID=="refreshFruit")
                {
                    QJsonValue value3 = subObject.value("nRow");
                    QJsonValue value4 = subObject.value("table");
                    fruitNum=value3.toInt();
                    currentFruitPage=fruitNum-1;//当前页码下标 初值
                    fruitList = value4.toArray();

                    responseRefreshFruit();
                }
                else if(strID=="collect")
                {
                    QJsonValue value3 = subObject.value("isSuccessful");
                    bool isSuccessful=value3.toBool();
                    responseCollect(isSuccessful);
                }
                else if(strID=="addToCart")
                {
                    QJsonValue value3 = subObject.value("isSuccessful");
                    bool isSuccessful=value3.toBool();
                    responseAddToCart(isSuccessful);
                }
            }
        }
        else
        {
            QMessageBox::warning(NULL,"","json解码异常！");
        }
    }
}


//连锁加载函数：个人信息 公告栏 水果展台 水果照片 收藏夹 购物车 订单 客服中心
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
void MainWindow::refreshNotice()//加载公告
{
    QString s=QString("select * from notice");
    QJsonArray arrSQL;
    arrSQL.append(s);
    sendMessage("refreshNotice",arrSQL);
}
void MainWindow::responseRefreshNotice(QString title, QString content,QString nT)
{
    ui->titleValue->setText(title);
    ui->contentValue->setText(content);
    QString n="发布时间: "+nT;
    ui->noticeTime->setText(n);
    ui->titleValue->setReadOnly(true);
    ui->contentValue->setReadOnly(true);

    refreshFruit();//连锁加载水果展台
}


//水果展台
void MainWindow::refreshFruit()
{
    QString s=QString("select * from fruit");
    QJsonArray arrSQL;
    arrSQL.append(s);
    sendMessage("refreshFruit",arrSQL);
}
void MainWindow::responseRefreshFruit()
{
    QJsonValue temp=fruitList.at(fruitNum-1);//加载最新的记录
    QJsonArray tempfruit=temp.toArray();

    fruitID=tempfruit.at(0).toString().toInt();
    QString name=tempfruit.at(1).toString();
    QString sort=tempfruit.at(3).toString();
    QString origin=tempfruit.at(4).toString();
    QString price=tempfruit.at(5).toString();
    QString sale=tempfruit.at(6).toString();
    QString stock=tempfruit.at(7).toString();

    ui->fruit_name->setText(name);
    ui->fruit_price->setText(price);
    ui->fruit_sort->setText(sort);
    ui->fruit_origin->setText(origin);
    ui->fruit_sale->setText(sale);
    ui->fruit_stock->setText(stock);

    QString sql=QString("select * from fruit where number = '%1'").arg(fruitID);
    QJsonArray arrSQL;
    arrSQL.append(sql);
    sendMessage("loadImage",arrSQL);
}
void MainWindow::toLoadImage(QByteArray arr)//加载水果图片
{
    QPixmap *img=new QPixmap;
    img->loadFromData(arr);
    ui->fruit_picture->setPixmap(img->scaled(ui->fruit_picture->size(),Qt::KeepAspectRatio,Qt::SmoothTransformation));

    on_refreshFavorites_clicked();//加载收藏夹
}
void MainWindow::on_sortBtn_clicked()
{
    QString s=ui->sortBox->currentText();
    QString sql;
    if(s=="全部水果")
    {
        refreshFruit();
    }
    else
    {
        sql=QString("select * from fruit where sort = '%1'").arg(s);
        QJsonArray arrSQL;
        arrSQL.append(sql);
        sendMessage("refreshFruit",arrSQL);
    }
}
void MainWindow::on_search_clicked()
{
    QString s=ui->searchKey->text();
    QString sql;
    if(s=="")
    {
        refreshFruit();
    }
    else
    {
        sql=QString("select * from fruit where name = '%1'").arg(s);
        QJsonArray arrSQL;
        arrSQL.append(sql);
        sendMessage("refreshFruit",arrSQL);
    }
}
void MainWindow::on_pgUp_clicked()
{
    if(currentFruitPage+1>=fruitNum)
        QMessageBox::warning(NULL,"","当前已是第1页");
    else
    {
        QJsonValue temp=fruitList.at(++currentFruitPage);
        QJsonArray tempfruit=temp.toArray();

        fruitID=tempfruit.at(0).toString().toInt();
        QString name=tempfruit.at(1).toString();
        QString sort=tempfruit.at(3).toString();
        QString origin=tempfruit.at(4).toString();
        QString price=tempfruit.at(5).toString();
        QString sale=tempfruit.at(6).toString();
        QString stock=tempfruit.at(7).toString();

        ui->fruit_name->setText(name);
        ui->fruit_price->setText(price);
        ui->fruit_sort->setText(sort);
        ui->fruit_origin->setText(origin);
        ui->fruit_sale->setText(sale);
        ui->fruit_stock->setText(stock);

        QString sql=QString("select * from fruit where number = '%1'").arg(fruitID);
        QJsonArray arrSQL;
        arrSQL.append(sql);
        sendMessage("loadImage",arrSQL);
    }
}
void MainWindow::on_pgDw_clicked()
{
    if(currentFruitPage-1<0)
        QMessageBox::warning(NULL,"","当前已是最后一页！");
    else
    {
        QJsonValue temp=fruitList.at(--currentFruitPage);
        QJsonArray tempfruit=temp.toArray();

        fruitID=tempfruit.at(0).toString().toInt();
        QString name=tempfruit.at(1).toString();
        QString sort=tempfruit.at(3).toString();
        QString origin=tempfruit.at(4).toString();
        QString price=tempfruit.at(5).toString();
        QString sale=tempfruit.at(6).toString();
        QString stock=tempfruit.at(7).toString();

        ui->fruit_name->setText(name);
        ui->fruit_price->setText(price);
        ui->fruit_sort->setText(sort);
        ui->fruit_origin->setText(origin);
        ui->fruit_sale->setText(sale);
        ui->fruit_stock->setText(stock);

        QString sql=QString("select * from fruit where number = '%1'").arg(fruitID);
        QJsonArray arrSQL;
        arrSQL.append(sql);
        sendMessage("loadImage",arrSQL);
    }
}
void MainWindow::on_sort1_clicked()//销量高到低
{
    QString s1=ui->sortBox->currentText();
    QString s2=ui->searchKey->text();
    QString sql;
    if(s1=="全部水果"&&s2=="")
        sql=QString("select * from fruit order by sale");//默认从小到大，展示时会反过来，变成从大到小
    else if(s1!="全部水果"&&s2=="")
        sql=QString("select * from fruit where sort = '%1' order by sale").arg(s1);
    else//只要搜索框不为空，就按关键字搜索
        sql=QString("select * from fruit where name = '%1' order by sale").arg(s2);

    QJsonArray arrSQL;
    arrSQL.append(sql);
    sendMessage("refreshFruit",arrSQL);
}
void MainWindow::on_sort2_clicked()//价格从低到高
{
    QString s1=ui->sortBox->currentText();
    QString s2=ui->searchKey->text();
    QString sql;
    if(s1=="全部水果"&&s2=="")
        sql=QString("select * from fruit order by price desc");//desc从大到小，展示时会反过来，变成从小到大
    else if(s1!="全部水果"&&s2=="")
        sql=QString("select * from fruit where sort = '%1' order by price desc").arg(s1);
    else//只要搜索框不为空，就按关键字搜索
        sql=QString("select * from fruit where name = '%1' order by price desc").arg(s2);

    QJsonArray arrSQL;
    arrSQL.append(sql);
    sendMessage("refreshFruit",arrSQL);
}
void MainWindow::on_sort3_clicked()//价格从高到低
{
    QString s1=ui->sortBox->currentText();
    QString s2=ui->searchKey->text();
    QString sql;
    if(s1=="全部水果"&&s2=="")
        sql=QString("select * from fruit order by price");//默认从小到大，展示时会反过来，变成从大到小
    else if(s1!="全部水果"&&s2=="")
        sql=QString("select * from fruit where sort = '%1' order by price").arg(s1);
    else//只要搜索框不为空，就按关键字搜索
        sql=QString("select * from fruit where name = '%1' order by price").arg(s2);

    QJsonArray arrSQL;
    arrSQL.append(sql);
    sendMessage("refreshFruit",arrSQL);
}
void MainWindow::on_collect_clicked()
{
    QString fruit=ui->fruit_name->text();
    QString price=ui->fruit_price->text();
    QString stock=ui->fruit_stock->text();
    QString customer=userNameNow;

    QString sql=QString("insert into favorites(fruit,price,stock,customer) values('%1','%2','%3','%4')").arg(fruit).arg(price).arg(stock).arg(customer);
    QJsonArray arrSQL;
    arrSQL.append(sql);
    sendMessage("collect",arrSQL);
}
void MainWindow::responseCollect(bool isSuccessful)
{
    if(isSuccessful)
    {
        QMessageBox::information(NULL,"","收藏成功");
        on_refreshFavorites_clicked();
    }
    else
    {
        QMessageBox::warning(NULL,"","收藏失败！");
    }
}
void MainWindow::on_addToCart_clicked()
{
    QString customer=userNameNow;
    QString fruit=ui->fruit_name->text();
    QString num=ui->buyNum->text();

    QString price=ui->fruit_price->text();
    double temp=num.toInt()*price.toDouble();
    QString cost;
    cost.setNum(temp);

    QString sql=QString("insert into cart(customer,fruit,num,cost) values('%1','%2','%3','%4')").arg(customer).arg(fruit).arg(num).arg(cost);
    QJsonArray arrSQL;
    arrSQL.append(sql);
    sendMessage("addToCart",arrSQL);
}
void MainWindow::responseAddToCart(bool isSuccessful)
{
    if(isSuccessful)
    {
        QMessageBox::information(NULL,"","加入成功");
        refreshCart();
    }
    else
    {
        QMessageBox::warning(NULL,"","加入失败！");
    }
}


//收藏夹
void MainWindow::on_refreshFavorites_clicked()
{
    QJsonArray arrSQL;
    QString sql=QString("select * from favorites where customer = '%1'").arg(userNameNow);
    arrSQL.append(sql);
    sendMessage("refreshFavorites",arrSQL);
}
void MainWindow::responseRefreshFavorites(int r, QJsonArray table)
{
    int i = 0, j = 0, row,col;
    col = ui->favoritesTable->columnCount();
    row = r;
    ui->favoritesTable->setRowCount(row);
    while(j<row)
    {
        QJsonValue tempRow=table.at(j);
        QJsonArray temp = tempRow.toArray();
        for (i = 0; i<col-1; i++)
        {
            QJsonValue tempCol=temp.at(i);
            QString s=tempCol.toString();
            ui->favoritesTable->setItem(j, i, new QTableWidgetItem(s));
        }
        QTableWidgetItem *checkBox = new QTableWidgetItem();//添加多选框
        checkBox->setCheckState(Qt::Unchecked);
        ui->favoritesTable->setItem(j,col-1, checkBox);
        j++;
    }
    choosedrow.clear();
    ui->favoritesTable->scrollToBottom();

    refreshCart();//加载购物车
}
void MainWindow::on_favoritesTable_cellChanged(int row, int column)
{
    if(ui->favoritesTable->item(row, column)->checkState() == Qt::Checked)
    {
        choosedrow<<ui->favoritesTable->item(row, 0)->text();
    }
    else//剔除取消勾选的行的编号
    {
        QString s=ui->favoritesTable->item(row, 0)->text();
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
void MainWindow::on_deleteFavorites_clicked()
{
    if(!choosedrow.empty())
    {
        QJsonArray arrSQL;
        for(QString e:choosedrow)
        {
            QString s=QString("delete from favorites where id='%1'").arg(e);
            arrSQL.append(s);
        }
        sendMessage("deleteFavorites",arrSQL);
    }
    else
    {
        QMessageBox::warning(NULL,"","未选中任何水果！");
    }
}
void MainWindow::responseDeleteFavorites(bool isSuccessful)
{
    if(isSuccessful)
    {
        QMessageBox::information(NULL,"","删除成功");
    }
    else
    {
        QMessageBox::warning(NULL,"","删除失败！");
    }
    on_refreshFavorites_clicked();
    choosedrow.clear();
}


//购物车
void MainWindow::refreshCart()//加载购物车
{
    QJsonArray arrSQL;
    QString sql=QString("select * from cart where customer = '%1'").arg(userNameNow);
    arrSQL.append(sql);
    sendMessage("refreshCart",arrSQL);
}
void MainWindow::responseRefreshCart(int r, QJsonArray table)
{
    int i = 0, j = 0, row,col;
    col = ui->cartTable->columnCount();
    row = r;
    ui->cartTable->setRowCount(row);
    while(j<row)
    {
        QJsonValue tempRow=table.at(j);
        QJsonArray temp = tempRow.toArray();
        for (i = 0; i<col-1; i++)
        {
            QJsonValue tempCol=temp.at(i);
            QString s=tempCol.toString();
            ui->cartTable->setItem(j, i, new QTableWidgetItem(s));
            if(i==0)
            {
                ui->cartTable->item(j,i)->setFlags(Qt::NoItemFlags);
            }
        }
        QTableWidgetItem *checkBox = new QTableWidgetItem();//添加多选框
        checkBox->setCheckState(Qt::Unchecked);
        ui->cartTable->setItem(j,col-1, checkBox);
        j++;
    }
    choosedrow.clear();
    ui->cartTable->scrollToBottom();

    setMoney();//计算总金额

    on_searchOrder_clicked();//连锁加载订单
}
void MainWindow::on_cartTable_cellChanged(int row, int column)
{
    if(ui->cartTable->item(row, column)->checkState() == Qt::Checked)
    {
        choosedrow<<ui->cartTable->item(row, 0)->text();
    }
    else//剔除取消勾选的行的编号
    {
        QString s=ui->cartTable->item(row, 0)->text();
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
void MainWindow::on_deleteCart_clicked()
{
    if(!choosedrow.empty())
    {
        QJsonArray arrSQL;
        for(QString e:choosedrow)
        {
            QString s=QString("delete from cart where id='%1'").arg(e);
            arrSQL.append(s);
        }
        sendMessage("deleteCart",arrSQL);
    }
    else
    {
        QMessageBox::warning(NULL,"","未选中任何水果！");
    }
}
void MainWindow::responseDeleteCart(bool isSuccessful)
{
    if(isSuccessful)
    {
        QMessageBox::information(NULL,"","删除成功");
    }
    else
    {
        QMessageBox::warning(NULL,"","删除失败！");
    }
    refreshCart();
    choosedrow.clear();
}
void MainWindow::on_submitCart_clicked()
{
    int rowCart=ui->cartTable->rowCount();
    QString id,item1,item2,item3,item4,item5,item6,item7,item8;
    QString sql1,sql2;
    QJsonArray arrSQL;
    for(int i=0;i<rowCart;i++)
    {
        id=ui->cartTable->item(i,0)->text();
        item1=QDateTime::currentDateTime().toString("yyyy年MM月dd日 hh:mm:ss");
        item2=userNameNow;
        item3=ui->cartTable->item(i,1)->text();
        item4=ui->cartTable->item(i,2)->text();
        item5=ui->cartTable->item(i,3)->text();
        item6=ui->phoneValue->text();
        item7=ui->addressValue->text();
        item8="未配送订单";

        sql1=QString("insert into ordering (time,customer,fruit,num,cost,phone,address,status) values('%1','%2','%3','%4','%5','%6','%7','%8')").arg(item1).arg(item2).arg(item3).arg(item4).arg(item5).arg(item6).arg(item7).arg(item8);
        sql2=QString("delete from cart where id='%1'").arg(id);
        arrSQL.append(sql1);
        arrSQL.append(sql2);
    }
    sendMessage("submitCart",arrSQL);
}
void MainWindow::responseSubmitCart(bool isSuccessful)
{
    if(isSuccessful)
    {
        QMessageBox::information(NULL,"","提交成功");
    }
    else
    {
        QMessageBox::warning(NULL,"","提交失败！");
    }
    refreshCart();//刷新购物车
    ui->orderStatus->setCurrentIndex(0);
    on_searchOrder_clicked();//刷新订单
}


//订单
void MainWindow::on_searchOrder_clicked()//加载订单
{
    QJsonArray arrSQL;
    QString s=ui->orderStatus->currentText();
    QString sql=QString("select * from ordering where status = '%1' and customer = '%2'").arg(s).arg(userNameNow);
    if(s=="全部订单")
        sql=QString("select * from ordering where customer = '%1'").arg(userNameNow);
    arrSQL.append(sql);
    sendMessage("mySearchOrder",arrSQL);
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
        for (i = 0; i<col-1; i++)
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

    on_loadChat_clicked();//加载客服中心
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
void MainWindow::on_receipt_clicked()
{
    if(!choosedrow.empty())
    {
        QJsonArray arrSQL;
        for(QString e:choosedrow)
        {
            QString s=QString("update ordering set status = '成功订单' where id='%1'").arg(e);
            arrSQL.append(s);
        }
        sendMessage("send",arrSQL);
    }
    else
    {
        QMessageBox::warning(NULL,"","未选中任何订单！");
    }
}
void MainWindow::on_cancel_clicked()
{
    if(!choosedrow.empty())
    {
        QJsonArray arrSQL;
        for(QString e:choosedrow)
        {
            QString s=QString("update ordering set status = '失败订单' where id='%1'").arg(e);
            arrSQL.append(s);
        }
        sendMessage("send",arrSQL);
    }
    else
    {
        QMessageBox::warning(NULL,"","未选中任何订单！");
    }
}
void MainWindow::responseReceipt(bool isSuccessful)
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
void MainWindow::on_loadChat_clicked()//加载最新20条消息
{
    QString sql =QString("select * from chat where sender = '%1' or reciever = '%1' order by id desc limit 20").arg(userNameNow);//按id排序，从大到小，取20条
    QJsonArray arrSQL;
    arrSQL.append(sql);
    sendMessage("loadChat",arrSQL);
}
void MainWindow::responseLoadChat(int r,QJsonArray table)
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
    ui->chatRecord->setText(contentDisplay);
    ui->chatRecord->moveCursor(QTextCursor::End);//滚动条定位到最下方
}
void MainWindow::on_chatSend_clicked()
{
    QString time,sender,reciever,content;
    time=QDateTime::currentDateTime().toString("yyyy年MM月dd日 hh:mm:ss");
    sender=userNameNow;
    reciever="管理员";
    content=ui->chatInput->toPlainText();

    QString sql=QString("insert into chat (time,sender,reciever,content) values ('%1','%2','%3','%4')").arg(time).arg(sender).arg(reciever).arg(content);
    QJsonArray arrSQL;
    arrSQL.append(sql);
    sendMessage("chatSend",arrSQL);
}
void MainWindow::responseChatSend(bool isSuccessful)
{
    if(isSuccessful)
    {
        on_loadChat_clicked();
        ui->chatInput->clear();
    }
    else
    {
        QMessageBox::warning(NULL,"","发送失败！");
    }
}


//修改个人信息
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
