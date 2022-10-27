#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QKeyEvent>
#include <QMessageBox>
#include <QJsonArray>

QT_BEGIN_NAMESPACE
namespace Ui { class login; }
QT_END_NAMESPACE

class login : public QDialog
{
    Q_OBJECT

public:
    login(QWidget *parent = nullptr);
    ~login();
    void keyPressEvent(QKeyEvent *event);    //设置回车响应函数

signals:
    void showmain();
    void showsign();
    void send_username(QString u);//记录登录的用户名
    void send_sql(QString id,QJsonArray sql);

private slots:
    void on_close_clicked();
    void on_mini_clicked();
    void on_signUp_clicked();
    void receivelogin();

    void on_signIn_clicked();
    void responseLogin(bool isSuccessful);

private:
    Ui::login *ui;

};
#endif // LOGIN_H
