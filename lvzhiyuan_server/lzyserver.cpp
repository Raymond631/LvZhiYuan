#include "lzyserver.h"

lzyServer::lzyServer(QObject *parent)
    : QTcpServer{parent}
{
    listen(QHostAddress::Any,8888);//服务器主机

    hostName = "localhost";
    dbName = "lzy";         // 数据库名称
    userName = "Raymond";
    password = "CSU@82092102";

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName(hostName);
    db.setDatabaseName(dbName);
    db.setUserName(userName);
    db.setPassword(password);
    db.open();
}

lzyServer::~lzyServer()
{
    db.close();
}

void lzyServer::incomingConnection(qintptr socketDescriptor)//当有新连接可用时，QTcpServer将调用此虚函数
{
    QTcpSocket* socket =new QTcpSocket(this);
    socket->setSocketDescriptor(socketDescriptor);
    QObject::connect(socket,SIGNAL(readyRead()),this,SLOT(receiveMessage()));
}
void lzyServer::receiveMessage()//接收消息
{
    QTcpSocket* socket = reinterpret_cast<QTcpSocket*>(sender());//send()判断信号发出者，用reinterpret_cast<>强转
    sock=socket;

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
            QString fileName = header.split(",")[1].split(":")[1];//图片名,含后缀
            QString fruitID = header.split(",")[2].split(":")[1].split(";")[0];//传过来的是水果名编号

            QString filePath =QString("D:/project/Qt/lvzhiyuan_server/image/%1").arg(fileName);
            QFile file(filePath);
            if(file.open(QIODevice::WriteOnly))
                file.write(arr);

            QString sql=QString("update fruit set imageURL ='%1' where number = '%2'").arg(filePath).arg(fruitID);
            QSqlQuery query;
            if(query.exec(sql))
            {
                QJsonObject res;
                res.insert("isSuccessful",true);
                sendMessage("insertImage",res);
            }
            else
            {
                QJsonObject res;
                res.insert("isSuccessful",false);
                sendMessage("insertImage",res);
            }
        }
        else if(fileType=="message")//sql消息
        {
            QJsonParseError jsonError;
            QJsonDocument doucm = QJsonDocument::fromJson(arr, &jsonError);

            if (!doucm.isNull() && (jsonError.error == QJsonParseError::NoError))
            {
                QJsonObject object = doucm.object();

                QJsonValue value1 = object.value("id");
                QString strID = value1.toString();
                QJsonValue value2 = object.value("sql");
                QJsonArray strSQL = value2.toArray();

                if(strID=="login")
                    toLogin(strSQL.at(0).toString());
                else if(strID=="signUpDetect")
                    toSignUpDetection(strSQL.at(0).toString());
                else if(strID=="signUp")
                    toSignUp(strSQL.at(0).toString());
                else if(strID=="refreshNotice")
                    toRefreshNotice(strSQL.at(0).toString());
                else if(strID=="refreshFruit")
                    toRefreshFruit(strSQL.at(0).toString());
                else if(strID=="saveNotice")
                    toSaveNotice(strSQL.at(0).toString());
                else if(strID=="deletion")
                    toDeletion(strSQL);
                else if(strID=="search")
                    toSearch(strSQL.at(0).toString());
                else if(strID=="saveFruit")
                    toSaveFruit(strSQL);
                else if(strID=="searchOrder")
                    toSearchOrder(strSQL.at(0).toString());
                else if(strID=="send")
                    toSend(strSQL);
                else if(strID=="savePersonInfo")
                    toSavePersonInfo(strSQL);
                else if(strID=="refreshUserInfo")
                    toRefreshUserInfo(strSQL.at(0).toString());
                else if(strID=="mySearchOrder")
                    toMySearchOrder(strSQL.at(0).toString());
                else if(strID=="refreshCart")
                    toRefreshCart(strSQL.at(0).toString());
                else if(strID=="deleteCart")
                    toDeleteCart(strSQL);
                else if(strID=="submitCart")
                    toSubmitCart(strSQL);
                else if(strID=="refreshFavorites")
                    toRefreshFavorites(strSQL.at(0).toString());
                else if(strID=="deleteFavorites")
                    toDeleteFavorites(strSQL);
                else if(strID=="chatSend")
                    toChatSend(strSQL.at(0).toString());
                else if(strID=="loadChat")
                    toLoadChat(strSQL.at(0).toString());
                else if(strID=="refreshChat")
                    toRefreshChat(strSQL.at(0).toString());
                else if(strID=="refreshMessage")
                    toRefreshMessage(strSQL.at(0).toString());
                else if(strID=="collect")
                    toCollect(strSQL.at(0).toString());
                else if(strID=="addToCart")
                    toAddToCart(strSQL.at(0).toString());
                else if(strID=="loadImage")
                    toLoadImage(strSQL.at(0).toString());
            }
            else
            {
                QMessageBox::warning(NULL,"","json解码异常！");
            }
        }
    }
}
void lzyServer::sendMessage(QString id, QJsonObject res)//发送消息
{
    QJsonObject sqljson;
    sqljson.insert("id",id);
    sqljson.insert("res",res);
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

void lzyServer::toLogin(QString sql)//登录
{
    QSqlQuery query;
    query.exec(sql);
    if(query.next())
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("login",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("login",res);
    }
}
void lzyServer::toSignUpDetection(QString sql)//用户名查重
{
    QSqlQuery query;
    query.exec(sql);
    if(query.next())
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("signUpDetect",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("signUpDetect",res);
    }
}
void lzyServer::toSignUp(QString sql)//注册
{
    QSqlQuery query;
    if(query.exec(sql))
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("signUp",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("signUp",res);
    }
}

void lzyServer::toRefreshNotice(QString sql)//加载公告
{
    QSqlQuery query;
    query.exec(sql);
    query.last();

    QJsonObject res;
    res.insert("title",query.value(1).toString());
    res.insert("content",query.value(2).toString());
    res.insert("noticeTime",query.value(3).toString());
    sendMessage("refreshNotice",res);
}
void lzyServer::toRefreshFruit(QString sql)//加载水果
{
    QSqlQuery query;
    query.exec(sql);
    QJsonObject res;

    query.last();
    int nRow = query.at() + 1;//传回去

    int i = 0, j = 0, nCol=9;//nCol要根据前端界面修改！！！
    query.first();
    QJsonArray table;
    while(j<nRow)
    {
        QJsonArray row;
        for (i = 0; i<nCol-1; i++)//nCol-1留给复选框
        {
            row.append(query.value(i).toString());
        }
        table.append(row);
        j++;
        query.next();
    }
    res.insert("nRow",nRow);
    res.insert("table",table);
    sendMessage("refreshFruit",res);

}
void lzyServer::toSearchOrder(QString sql)//加载订单
{
    QSqlQuery query;
    query.exec(sql);
    QJsonObject res;

    if(query.next())
    {
        res.insert("isSuccessful",true);

        query.last();
        int row = query.at() + 1;//传回去
        int i = 0, j = 0, col=10;//col要根据前端界面修改！！！
        query.first();
        QJsonArray table;
        while(j<row)
        {
            QJsonArray row;
            for (i = 0; i<col-1; i++)//col-1留给复选框
            {
                row.append(query.value(i).toString());
            }
            table.append(row);
            j++;
            query.next();
        }
        res.insert("row",row);
        res.insert("table",table);
        sendMessage("searchOrder",res);
    }
    else
    {
        res.insert("isSuccessful",false);
        sendMessage("searchOrder",res);
    }
}
void lzyServer::toRefreshUserInfo(QString sql)//加载个人信息
{
    QJsonObject res;
    QSqlQuery query;
    query.exec(sql);

    if(query.next())
    {
        res.insert("isSuccessful",true);
        QJsonArray userInfo;
        userInfo.append(query.value(1).toString());
        userInfo.append(query.value(2).toString());
        userInfo.append(query.value(3).toString());
        userInfo.append(query.value(4).toString());

        res.insert("userInformation",userInfo);
        sendMessage("refreshUserInfo",res);
    }
    else
    {
        res.insert("isSuccessful",false);
        sendMessage("refreshUserInfo",res);
    }

}

void lzyServer::toSaveNotice(QString sql)//修改公告
{
    QSqlQuery query;
    if(query.exec(sql))
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("saveNotice",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("saveNotice",res);
    }
}
void lzyServer::toDeletion(QJsonArray listSQL)//删除水果
{
    QSqlQuery query;
    bool temp=true;
    for(QJsonValue e:listSQL)
    {
        if(!query.exec(e.toString()))
            temp=false;
    }
    if(temp)
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("deletion",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("deletion",res);
    }
}
void lzyServer::toSearch(QString sql)//查询水果
{
    QSqlQuery query;
    query.exec(sql);
    QJsonObject res;

    if(query.next())
    {
        res.insert("isSuccessful",true);

        query.last();
        int nRow = query.at() + 1;//传回去

        int i = 0, j = 0, nCol=9;//nCol要根据前端界面修改！！！
        query.first();
        QJsonArray table;
        while(j<nRow)
        {
            QJsonArray row;
            for (i = 0; i<nCol-1; i++)//nCol-1留给复选框
            {
                row.append(query.value(i).toString());
            }
            table.append(row);
            j++;
            query.next();
        }
        res.insert("nRow",nRow);
        res.insert("table",table);
        sendMessage("search",res);
    }
    else
    {
        res.insert("isSuccessful",false);
        sendMessage("search",res);
    }
}
void lzyServer::toSaveFruit(QJsonArray listSQL)//修改、新增水果
{
    QSqlQuery query;
    bool temp=true;
    for(QJsonValue e:listSQL)
    {
        if(!query.exec(e.toString()))
            temp=false;
    }
    if(temp)
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("saveFruit",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("saveFruit",res);
    }
}
void lzyServer::toSend(QJsonArray listSQL)//订单发货
{
    QSqlQuery query;
    bool temp=true;
    for(QJsonValue e:listSQL)
    {
        if(!query.exec(e.toString()))
            temp=false;
    }
    if(temp)
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("send",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("send",res);
    }
}
void lzyServer::toSavePersonInfo(QJsonArray listSQL)//修改个人信息
{
    QSqlQuery query;
    bool temp=true;
    for(QJsonValue e:listSQL)
    {
        if(!query.exec(e.toString()))
            temp=false;
    }
    if(temp)
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("savePersonInfo",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("savePersonInfo",res);
    }
}

void lzyServer::toMySearchOrder(QString sql)//客户端加载订单
{
    QSqlQuery query;
    query.exec(sql);
    QJsonObject res;

    if(query.next())
    {
        res.insert("isSuccessful",true);

        query.last();
        int row = query.at() + 1;//传回去
        int i = 0, j = 0, col=10;//col要根据前端界面修改！！！
        query.first();
        QJsonArray table;
        while(j<row)
        {
            QJsonArray row;
            for (i = 0; i<col-1; i++)//col-1留给复选框
            {
                if(i==2||i==6||i==7)
                    continue;

                row.append(query.value(i).toString());
            }
            table.append(row);
            j++;
            query.next();
        }
        res.insert("row",row);
        res.insert("table",table);
        sendMessage("mySearchOrder",res);
    }
    else
    {
        res.insert("isSuccessful",false);
        sendMessage("mySearchOrder",res);
    }
}
void lzyServer::toRefreshCart(QString sql)//客户端加载购物车
{
    QSqlQuery query;
    query.exec(sql);
    QJsonObject res;

    if(query.next())
    {
        res.insert("isSuccessful",true);

        query.last();
        int row = query.at() + 1;//传回去
        int i = 0, j = 0, col=5;//col要根据前端界面修改！！！
        query.first();
        QJsonArray table;
        while(j<row)
        {
            QJsonArray row;
            for (i = 0; i<col; i++)
            {
                if(i==1)
                    continue;

                row.append(query.value(i).toString());
            }
            table.append(row);
            j++;
            query.next();
        }
        res.insert("row",row);
        res.insert("table",table);
        sendMessage("refreshCart",res);
    }
    else
    {
        res.insert("isSuccessful",false);
        sendMessage("refreshCart",res);
    }
}
void lzyServer::toDeleteCart(QJsonArray listSQL)//客户端删除购物车item
{
    QSqlQuery query;
    bool temp=true;
    for(QJsonValue e:listSQL)
    {
        if(!query.exec(e.toString()))
            temp=false;
    }
    if(temp)
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("deleteCart",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("deleteCart",res);
    }
}
void lzyServer::toSubmitCart(QJsonArray listSQL)//客户端提交购物车订单
{
    QSqlQuery query;
    bool temp=true;
    for(QJsonValue e:listSQL)
    {
        if(!query.exec(e.toString()))
            temp=false;
    }
    if(temp)
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("submitCart",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("submitCart",res);
    }
}
void lzyServer::toRefreshFavorites(QString sql)//客户端加载收藏夹
{
    QSqlQuery query;
    query.exec(sql);
    QJsonObject res;

    if(query.next())
    {
        res.insert("isSuccessful",true);

        query.last();
        int row = query.at() + 1;//传回去
        int i = 0, j = 0, col=4;//col要根据前端界面修改！！！
        query.first();
        QJsonArray table;
        while(j<row)
        {
            QJsonArray row;
            for (i = 0; i<col; i++)
            {
                row.append(query.value(i).toString());
            }
            table.append(row);
            j++;
            query.next();
        }
        res.insert("row",row);
        res.insert("table",table);
        sendMessage("refreshFavorites",res);
    }
    else
    {
        res.insert("isSuccessful",false);
        sendMessage("refreshFavorites",res);
    }
}
void lzyServer::toDeleteFavorites(QJsonArray listSQL)//客户端删除收藏夹item
{
    QSqlQuery query;
    bool temp=true;
    for(QJsonValue e:listSQL)
    {
        if(!query.exec(e.toString()))
            temp=false;
    }
    if(temp)
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("deleteFavorites",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("deleteFavorites",res);
    }
}
void lzyServer::toChatSend(QString sql)//发送聊天消息，存入数据库
{
    QSqlQuery query;
    if(query.exec(sql))
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("chatSend",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("chatSend",res);
    }
}
void lzyServer::toLoadChat(QString sql)//客户端刷新聊天界面
{
    QSqlQuery query;
    query.exec(sql);
    QJsonObject res;

    if(query.next())
    {
        res.insert("isSuccessful",true);

        query.last();
        int row = query.at() + 1;//传回去
        int i=0,j=0;
        query.first();
        QJsonArray table;
        while(j<row)
        {
            QJsonArray row;
            for (i = 0; i<5; i++)
            {
                if(i==0||i==3)
                    continue;

                row.append(query.value(i).toString());
            }
            table.append(row);
            j++;
            query.next();
        }
        res.insert("row",row);
        res.insert("table",table);
        sendMessage("loadChat",res);
    }
    else
    {
        res.insert("isSuccessful",false);
        sendMessage("loadChat",res);
    }
}

void lzyServer::toRefreshChat(QString sql)//管理端加载最近联系客服的用户名单
{
    QSqlQuery query;
    query.exec(sql);
    QJsonObject res;

    QJsonArray chatUser;
    QString u;
    bool temp;

    while(query.next())
    {
        u=query.value(2).toString();

        temp=true;
        for(QJsonValue e:chatUser)//重复数据不保存
        {
            if(u==e.toString())
                temp=false;
        }
        if(temp)
        {
            chatUser.append(u);
        }
    }
    res.insert("chatUser",chatUser);
    sendMessage("refreshChat",res);
}
void lzyServer::toRefreshMessage(QString sql)//管理端加载聊天记录
{
    QSqlQuery query;
    query.exec(sql);
    QJsonObject res;

    if(query.next())
    {
        res.insert("isSuccessful",true);

        query.last();
        int row = query.at() + 1;//传回去
        int i=0,j=0;
        query.first();
        QJsonArray table;
        while(j<row)
        {
            QJsonArray row;
            for (i = 0; i<5; i++)
            {
                if(i==0||i==3)
                    continue;

                row.append(query.value(i).toString());
            }
            table.append(row);
            j++;
            query.next();
        }
        res.insert("row",row);
        res.insert("table",table);
        sendMessage("refreshMessage",res);
    }
    else
    {
        res.insert("isSuccessful",false);
        sendMessage("refreshMessage",res);
    }
}
void lzyServer::toCollect(QString sql)//客户端加入收藏夹
{
    QSqlQuery query;
    if(query.exec(sql))
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("collect",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("collect",res);
    }
}
void lzyServer::toAddToCart(QString sql)//客户端加入购物车
{
    QSqlQuery query;
    if(query.exec(sql))
    {
        QJsonObject res;
        res.insert("isSuccessful",true);
        sendMessage("addToCart",res);
    }
    else
    {
        QJsonObject res;
        res.insert("isSuccessful",false);
        sendMessage("addToCart",res);
    }
}

void lzyServer::toLoadImage(QString sql)//客户端加载图片
{
    QSqlQuery query;
    query.exec(sql);
    if(query.next())
    {
        QString filePath=query.value(9).toString();

        QDataStream socketStream(sock);
        socketStream.setVersion(QDataStream::Qt_6_3);

        QFile m_file(filePath);
        m_file.open(QIODevice::ReadOnly);
        QFileInfo fileInfo(m_file.fileName());
        QString fileName(fileInfo.fileName());
        QByteArray header;
        header.prepend(QString("fileType:attachment,fileName:%1,fileSize:%2;").arg(fileName).arg(m_file.size()).toUtf8());
        header.resize(128);

        QByteArray byteArray = m_file.readAll();
        byteArray.prepend(header);

        socketStream << byteArray;
    }
}
