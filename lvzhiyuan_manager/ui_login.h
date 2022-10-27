/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *close;
    QPushButton *mini;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *account;
    QSpacerItem *verticalSpacer_3;
    QLabel *password;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *accountValue;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *passwordValue;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *signUp;
    QPushButton *signIn;
    QFrame *frame;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(500, 300);
        login->setStyleSheet(QString::fromUtf8("*{\n"
"font: 16pt \"\346\245\267\344\275\223\";\n"
"}\n"
"QLabel{\n"
"color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit{\n"
"border-radius: 15px;\n"
"background-color: rgba(255, 255, 255, 180);\n"
"}\n"
"QPushButton{\n"
"border-radius: 15px;\n"
"	background-color: rgba(255, 255, 255, 200);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgba(255, 255, 255, 255);\n"
"	padding-left:3px;\n"
"	padding-top:3px;\n"
"}\n"
"\n"
""));
        close = new QPushButton(login);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(470, 0, 30, 30));
        close->setStyleSheet(QString::fromUtf8("font: 700 7pt \"Microsoft YaHei UI\";"));
        mini = new QPushButton(login);
        mini->setObjectName(QString::fromUtf8("mini"));
        mini->setGeometry(QRect(440, 0, 30, 30));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(9);
        font.setBold(true);
        font.setItalic(false);
        mini->setFont(font);
        mini->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";"));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 300, 46));
        label->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        layoutWidget = new QWidget(login);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 501, 304));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(100, 75, 100, 50);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        account = new QLabel(layoutWidget);
        account->setObjectName(QString::fromUtf8("account"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        account->setFont(font1);
        account->setStyleSheet(QString::fromUtf8(""));
        account->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(account);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        password = new QLabel(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setFont(font1);
        password->setStyleSheet(QString::fromUtf8(""));
        password->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(password);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        accountValue = new QLineEdit(layoutWidget);
        accountValue->setObjectName(QString::fromUtf8("accountValue"));
        accountValue->setFont(font1);

        verticalLayout_2->addWidget(accountValue);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        passwordValue = new QLineEdit(layoutWidget);
        passwordValue->setObjectName(QString::fromUtf8("passwordValue"));
        passwordValue->setFont(font1);
        passwordValue->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(passwordValue);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(275, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        signUp = new QPushButton(layoutWidget);
        signUp->setObjectName(QString::fromUtf8("signUp"));
        signUp->setMinimumSize(QSize(0, 30));
        signUp->setFont(font1);

        horizontalLayout_2->addWidget(signUp);

        signIn = new QPushButton(layoutWidget);
        signIn->setObjectName(QString::fromUtf8("signIn"));
        signIn->setMinimumSize(QSize(0, 30));
        signIn->setFont(font1);
        signIn->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(signIn);


        verticalLayout_3->addLayout(horizontalLayout_2);

        frame = new QFrame(login);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 500, 300));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/img/spring-4158957_640.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->raise();
        layoutWidget->raise();
        close->raise();
        label->raise();
        mini->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        close->setText(QCoreApplication::translate("login", "\342\250\211", nullptr));
        mini->setText(QCoreApplication::translate("login", "\342\200\223", nullptr));
        label->setText(QCoreApplication::translate("login", "\347\273\277\344\271\213\346\272\220\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        account->setText(QCoreApplication::translate("login", "\350\264\246\345\217\267\357\274\232", nullptr));
        password->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        signUp->setText(QCoreApplication::translate("login", "\346\263\250\345\206\214", nullptr));
        signIn->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
