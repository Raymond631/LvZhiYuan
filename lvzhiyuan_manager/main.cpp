#include "login.h"
#include "signupwindows.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    login l;
    MainWindow m;
    signUpWindows s;

    l.show();

    QObject::connect(&l, SIGNAL(showsign()), &s, SLOT(receivesign()));//登录->注册
    QObject::connect(&s, SIGNAL(showlogin()), &l, SLOT(receivelogin()));//注册->登录
    QObject::connect(&l, SIGNAL(showmain()), &m, SLOT(receivemain()));//登录->首页
    QObject::connect(&l, SIGNAL(send_username(QString)), &m, SLOT(refreshUserInfo(QString)));//将用户名从登录界面传到主界面
    QObject::connect(&m, SIGNAL(showlogin()), &l, SLOT(receivelogin()));//主页面注销->登录

    QObject::connect(&l, SIGNAL(send_sql(QString,QJsonArray)), &m, SLOT(sendMessage(QString,QJsonArray)));//登录界面与主界面的TcpSocket交互
    QObject::connect(&m, SIGNAL(responseToLogin(bool)), &l, SLOT(responseLogin(bool)));

    QObject::connect(&s, SIGNAL(send_sql(QString,QJsonArray)), &m, SLOT(sendMessage(QString,QJsonArray)));//注册界面与主界面的TcpSocket交互
    QObject::connect(&m, SIGNAL(responseToSignDetection(bool)), &s, SLOT(responseSignDetection(bool)));
    QObject::connect(&m, SIGNAL(responseToSignUp(bool)), &s, SLOT(responseSignUp(bool)));

    return a.exec();
}
