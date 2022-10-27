#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QTcpSocket>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QDateTime>
#include <QTimer>
#include <QMessageBox>

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
    void receivemain();//显示主窗口
    void on_bar_currentRowChanged(int currentRow);//左侧导航栏
    void setTimeLabel();//首页时钟
    void setWelcome();//首页欢迎标签
    void setMoney();//计算购物车总金额


    //与服务器通信
    void sendMessage(QString id,QJsonArray sql);
    void recieveMessage();


    //加载函数
    void refreshUserInfo(QString u);//加载个人信息，登录后自动调用
    void responseRefreshUserInfo();
    void responseRefreshUserInfo(QString u,QString p,QString ph,QString a);

    void refreshNotice();//加载公告
    void responseRefreshNotice(QString title,QString content,QString nT);


    //水果展台
    void refreshFruit();//加载水果
    void responseRefreshFruit();
    void toLoadImage(QByteArray arr);//加载图片

    void on_sortBtn_clicked();//分类查看
    void on_search_clicked();//搜索
    void on_sort1_clicked();//销量高到低
    void on_sort2_clicked();//价格低到高
    void on_sort3_clicked();//价格高到低
    void on_pgUp_clicked();//上一页
    void on_pgDw_clicked();//下一页

    void on_collect_clicked();//收藏
    void responseCollect(bool isSuccessful);

    void on_addToCart_clicked();//加入购物车
    void responseAddToCart(bool isSuccessful);


    //收藏夹
    void on_refreshFavorites_clicked();//刷新
    void responseRefreshFavorites(int r,QJsonArray table);

    void on_favoritesTable_cellChanged(int row, int column);
    void on_deleteFavorites_clicked();//删除
    void responseDeleteFavorites(bool isSuccessful);


    //购物车
    void refreshCart();//加载购物车
    void responseRefreshCart(int r,QJsonArray table);

    void on_cartTable_cellChanged(int row, int column);
    void on_deleteCart_clicked();//删除
    void responseDeleteCart(bool isSuccessful);

    void on_submitCart_clicked();//结算
    void responseSubmitCart(bool isSuccessful);


    //订单
    void on_searchOrder_clicked();//加载订单
    void responseSearchOrder(int r,QJsonArray table);


    void on_orderTable_cellChanged(int row, int column);
    void on_receipt_clicked();//确认收货
    void on_cancel_clicked();//取消订单
    void responseReceipt(bool isSuccessful);


    //客服中心
    void on_loadChat_clicked();//加载聊天记录
    void responseLoadChat(int r,QJsonArray table);

    void on_chatSend_clicked();//发送
    void responseChatSend(bool isSuccessful);


    //个人中心
    void on_editPersonInfo_clicked();//编辑
    void on_savePersonInfo_clicked();//保存
    void responseSavePersonInfo(bool isSuccessful);

    void on_logout_clicked();//退出登录

private:
    Ui::MainWindow *ui;

    QString serverIP;//IP地址
    int serverPORT;//端口号
    QTcpSocket *sock;//套接字

    QString userNameNow;//当前用户名
    int nRow;//水果数据库行数
    QList<QString> choosedrow;//被选中的行的 编号（number值）
    QList<QString> changedrow;//被修改的行的 行号（第几行）
    QString contentDisplay;//聊天记录

    QJsonArray fruitList;//加载的水果列表
    int fruitNum;//加载的水果条数
    int currentFruitPage;//水果展台当前页码
    int fruitID;//当前水果ID
};

#endif // MAINWINDOW_H
