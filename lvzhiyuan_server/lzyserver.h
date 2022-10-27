#ifndef LZYSERVER_H
#define LZYSERVER_H

#include <QMessageBox>

#include <QTcpServer>
#include <QTcpSocket>

#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>

#include <QFile>
#include <QFileInfo>

#include <QSqlDatabase>
#include <QSqlQuery>

class lzyServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit lzyServer(QObject *parent = nullptr);
    ~lzyServer();

private slots:
    void incomingConnection(qintptr socketDescriptor);//连接客户端
    void receiveMessage();//接收消息
    void sendMessage(QString id,QJsonObject res);//发送消息


    void toLogin(QString sql);//登录检测
    void toSignUpDetection(QString sql);//注册检测
    void toSignUp(QString sql);//注册操作


    void toRefreshNotice(QString sql);//加载公告栏
    void toRefreshFruit(QString sql);//加载水果栏
    void toSearchOrder(QString sql);//加载订单信息
    void toRefreshUserInfo(QString sql);//加载个人信息


    void toSaveNotice(QString sql);//保存公告栏
    void toDeletion(QJsonArray listSQL);//删除水果记录
    void toSearch(QString sql);//查询水果信息
    void toSaveFruit(QJsonArray listSQL);//修改、新增水果信息
    void toSend(QJsonArray listSQL);//订单发货
    void toSavePersonInfo(QJsonArray listSQL);//修改个人信息

    void toMySearchOrder(QString sql);//客户端加载订单
    void toRefreshCart(QString sql);//客户端加载购物车
    void toDeleteCart(QJsonArray listSQL);//客户端删除购物车item
    void toSubmitCart(QJsonArray listSQL);//客户端提交购物车订单
    void toRefreshFavorites(QString sql);//客户端加载收藏夹
    void toDeleteFavorites(QJsonArray listSQL);//客户端删除收藏夹item
    void toChatSend(QString sql);//发送聊天消息，存入数据库
    void toLoadChat(QString sql);//客户端刷新聊天界面

    void toRefreshChat(QString sql);//加载最近联系客服的用户名单
    void toRefreshMessage(QString sql);//管理端加载聊天记录

    void toCollect(QString sql);//客户端加入收藏夹
    void toAddToCart(QString sql);//客户端加入购物车
    void toLoadImage(QString sql);//客户端加载图片

private:
    QTcpSocket* sock;

    QString hostName;
    QString dbName;
    QString userName;
    QString password;
    QSqlDatabase db;

};

#endif // LZYSERVER_H
