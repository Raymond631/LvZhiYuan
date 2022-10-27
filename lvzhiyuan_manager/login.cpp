#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());//去窗口边框
    ui->accountValue->setFocus();//光标自动定位在用户名输入框
}

login::~login()
{
    delete ui;
}

void login::keyPressEvent(QKeyEvent *event)//按下enter键登录
{
    if(event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return)
    {
        emit ui->signIn->click();
    }
}

void login::on_close_clicked()//关闭当前页面
{
    this->close();
}
void login::on_mini_clicked()//最小化
{
    showMinimized();
}
void login::on_signUp_clicked()//跳转到注册界面
{
    emit showsign();
    this->hide();
}
void login::receivelogin()//显示当前页面（登录页面）
{
    this->show();
    ui->accountValue->setFocus();
}

void login::on_signIn_clicked()//登录
{
    QString u,p;
    u=ui->accountValue->text();
    p=ui->passwordValue->text();
    QString S=QString("select * from user where username ='%1' and password = '%2'").arg(u).arg(p);
    QJsonArray arrSQL;
    arrSQL.append(S);
    emit send_sql("login",arrSQL);
}
void login::responseLogin(bool isSuccessful)
{
    if(isSuccessful)
    {
        QString u=ui->accountValue->text();
        emit send_username(u);
        emit showmain();
        this->close();

    }
    else if((ui->accountValue->text() == "") || (ui->passwordValue->text() == ""))
    {
        QMessageBox::warning(NULL, tr("提示"), tr("用户名或密码不能为空"), QMessageBox::Yes);
        ui->accountValue->clear();
        ui->passwordValue->clear();
        ui->accountValue->setFocus();
    }
    else
    {
        QMessageBox::warning(NULL,"","用户名或密码有误！");
        ui->accountValue->clear();
        ui->passwordValue->clear();
        ui->accountValue->setFocus();
    }
}
