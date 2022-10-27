#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDateTime>
#include <QTimer>
#include <QTcpSocket>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>

#include <QFileDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void responseToLogin(bool isSuccessful);
    void responseToSignDetection(bool isSuccessful);
    void responseToSignUp(bool isSuccessful);
    void showlogin();

private slots:
    void receivemain();
    void on_bar_currentRowChanged(int currentRow);
    void setTimeLabel();
    void setWelcome();


    //与服务器通信
    void sendMessage(QString id,QJsonArray sql);
    void recieveMessage();


    //连锁加载函数：个人信息 公告栏 水果管理 订单管理 客服中心
    void refreshUserInfo(QString u);//加载个人信息
    void responseRefreshUserInfo();
    void responseRefreshUserInfo(QString u,QString p,QString ph,QString a);


    //公告编辑
    void refreshNotice();//加载公告
    void responseRefreshNotice(QString title,QString content);

    void on_editNotice_clicked();
    void on_clear_clicked();
    void on_save_clicked();
    void responseSaveNotice(bool isSuccessful);


    //水果管理
    void refreshFruit();//加载水果
    void responseRefreshFruit(int r,QJsonArray table);

    void on_FruitTable_cellChanged(int row, int column);
    void on_deletion_clicked();
    void responseDeletion(bool isSuccessful);

    void on_search_clicked();
    void responseSearch();
    void responseSearch(int r,QJsonArray table);//重载

    void on_addtion_clicked();
    void on_saveFruit_clicked();
    void responseSaveFruit(bool isSuccessful);
    void on_insertImage_clicked();//上传图片

    //订单管理
    void on_searchOrder_clicked();//加载订单
    void responseSearchOrder();
    void responseSearchOrder(int r,QJsonArray table);

    void on_orderTable_cellChanged(int row, int column);
    void on_send_clicked();
    void responseSend(bool isSuccessful);


    //客服中心
    void on_refreshChat_clicked();
    void responseRefreshChat(QJsonArray arr);
    void on_meseagebar_currentRowChanged(int currentRow);
    void refreshMessage(int x);
    void responseRefreshMessage(int r,QJsonArray table);
    void on_chatSend_clicked();
    void responseChatSend(bool isSuccessful);


    //个人中心
    void on_editPersonInfo_clicked();
    void on_savePersonInfo_clicked();
    void responseSavePersonInfo(bool isSuccessful);
    void on_logout_clicked();

private:
    Ui::MainWindow *ui;

    QString serverIP;//IP地址
    int serverPORT;//端口号
    QTcpSocket *sock;//套接字

    QString userNameNow;//登录的账户
    int nRow;//水果数据库行数
    QList<QString> choosedrow;//被选中的行的 编号（number值）
    QList<QString> changedrow;//被修改的行的 行号（第几行）

    bool ref;//一个补丁，避免刷新聊天列表时 激发refreshMessage导致访问空指针
    QString contentDisplay;//聊天记录
    int currentUser;//当前页面用户序号
};

#endif // MAINWINDOW_H
