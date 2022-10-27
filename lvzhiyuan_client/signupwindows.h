#ifndef SIGNUPWINDOWS_H
#define SIGNUPWINDOWS_H

#include <QDialog>
#include <QKeyEvent>
#include <QMessageBox>
#include <QJsonArray>

namespace Ui {
class signUpWindows;
}

class signUpWindows : public QDialog
{
    Q_OBJECT

public:
    explicit signUpWindows(QWidget *parent = nullptr);
    ~signUpWindows();
    void keyPressEvent(QKeyEvent *event);    //设置回车响应函数

signals:
    void showlogin();
    void send_sql(QString id,QJsonArray sql);

private slots:
    void receivesign();
    void on_backToLogin_clicked();

    void on_registerButton_clicked();//注册
    void responseSignDetection(bool isSuccessful);//用户名查重
    void responseSignUp(bool isSuccessful);

private:
    Ui::signUpWindows *ui;

};

#endif // SIGNUPWINDOWS_H
