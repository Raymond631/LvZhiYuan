#include "signupwindows.h"
#include "ui_signupwindows.h"

signUpWindows::signUpWindows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signUpWindows)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());//去窗口边框
    managerKey="CSU_SE_2102";//管理员注册码
}

signUpWindows::~signUpWindows()
{
    delete ui;
}

void signUpWindows::keyPressEvent(QKeyEvent *event)//按下enter键注册
{
    if(event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return)
    {
        emit ui->registerButton->click();
    }
}
void signUpWindows::on_backToLogin_clicked()
{
    this->close();
    emit showlogin();
}
void signUpWindows::receivesign()
{
    this->show();
}

void signUpWindows::on_registerButton_clicked()//注册
{
    QString user,pwd,pwdcf,tp,ad,key;
    user = ui->userValue->text();
    pwd = ui->passValue->text();
    pwdcf =ui->confirmValue->text();
    tp=ui->phoneValue->text();
    ad=ui->addressValue->text();
    key=ui->keyValue->text();

    if(user == "")
        QMessageBox::warning(NULL,"","用户名不能为空！");
    else if(pwd == "")
        QMessageBox::warning(NULL,"","密码不能为空！");
    else if(tp=="")
        QMessageBox::warning(NULL,"","手机号不能为空！");
    else if(ad=="")
        QMessageBox::warning(NULL,"","地址不能为空！");
    else if(pwdcf!=pwd)
    {
        QMessageBox::warning(NULL,"","密码不一致！");
        ui->passValue->clear();
        ui->confirmValue->clear();
        ui->passValue->setFocus();
    }
    else if(key!=managerKey)
    {
        QMessageBox::warning(NULL,"","注册码错误！");
        ui->keyValue->clear();
        ui->keyValue->setFocus();
    }
    else
    {
        QString s=QString("select * from user where username ='%1'").arg(user);
        QJsonArray arrSQL;
        arrSQL.append(s);
        emit send_sql("signUpDetect",arrSQL);
    }
}
void signUpWindows::responseSignDetection(bool isSuccessful)//用户名查重
{
    if(isSuccessful)
    {
        QMessageBox::warning(NULL,"","用户名已存在！");
        ui->userValue->clear();
        ui->userValue->setFocus();
    }
    else
    {
        QString user,pwd,pwdcf,tp,ad,identity;
        user = ui->userValue->text();
        pwd = ui->passValue->text();
        pwdcf =ui->confirmValue->text();
        tp=ui->phoneValue->text();
        ad=ui->addressValue->text();
        identity="管理员";
        QString i=QString("insert into user (username,password,phone,address,identity) values ('%1','%2','%3','%4','%5') ").arg(user).arg(pwd).arg(tp).arg(ad).arg(identity);
        QJsonArray arrSQL;
        arrSQL.append(i);
        emit send_sql("signUp",arrSQL);
    }
}
void signUpWindows::responseSignUp(bool isSuccessful)
{
    if(isSuccessful)
    {
        QMessageBox::information(NULL,"","注册成功！");
        emit showlogin();
        this->close();
    }
    else
        QMessageBox::warning(NULL,"","注册失败！");
}
