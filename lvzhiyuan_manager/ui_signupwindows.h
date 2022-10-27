/********************************************************************************
** Form generated from reading UI file 'signupwindows.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOWS_H
#define UI_SIGNUPWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signUpWindows
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_1;
    QLabel *user;
    QLineEdit *userValue;
    QHBoxLayout *horizontalLayout_2;
    QLabel *pass;
    QLineEdit *passValue;
    QHBoxLayout *horizontalLayout_3;
    QLabel *confirm;
    QLineEdit *confirmValue;
    QHBoxLayout *horizontalLayout_4;
    QLabel *phone;
    QLineEdit *phoneValue;
    QHBoxLayout *horizontalLayout_5;
    QLabel *address;
    QLineEdit *addressValue;
    QHBoxLayout *horizontalLayout_6;
    QLabel *key;
    QLineEdit *keyValue;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *registerButton;
    QPushButton *backToLogin;
    QLabel *label;

    void setupUi(QDialog *signUpWindows)
    {
        if (signUpWindows->objectName().isEmpty())
            signUpWindows->setObjectName(QString::fromUtf8("signUpWindows"));
        signUpWindows->resize(700, 470);
        signUpWindows->setStyleSheet(QString::fromUtf8("*{\n"
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
"background-color: rgba(255, 255, 255, 200);\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgba(255, 255, 255, 255);\n"
"	padding-left:3px;\n"
"	padding-top:3px;\n"
"}\n"
""));
        frame = new QFrame(signUpWindows);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 700, 470));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/img/spring-4158957_640.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(signUpWindows);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 130, 701, 301));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(100, 0, 100, 0);
        horizontalLayout_1 = new QHBoxLayout();
        horizontalLayout_1->setObjectName(QString::fromUtf8("horizontalLayout_1"));
        user = new QLabel(layoutWidget);
        user->setObjectName(QString::fromUtf8("user"));
        user->setMinimumSize(QSize(137, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        user->setFont(font);
        user->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_1->addWidget(user);

        userValue = new QLineEdit(layoutWidget);
        userValue->setObjectName(QString::fromUtf8("userValue"));
        userValue->setFont(font);

        horizontalLayout_1->addWidget(userValue);


        verticalLayout->addLayout(horizontalLayout_1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pass = new QLabel(layoutWidget);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setMinimumSize(QSize(137, 0));
        pass->setFont(font);
        pass->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(pass);

        passValue = new QLineEdit(layoutWidget);
        passValue->setObjectName(QString::fromUtf8("passValue"));
        passValue->setFont(font);
        passValue->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passValue);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        confirm = new QLabel(layoutWidget);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setMinimumSize(QSize(137, 0));
        confirm->setFont(font);
        confirm->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(confirm);

        confirmValue = new QLineEdit(layoutWidget);
        confirmValue->setObjectName(QString::fromUtf8("confirmValue"));
        confirmValue->setFont(font);
        confirmValue->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(confirmValue);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        phone = new QLabel(layoutWidget);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setMinimumSize(QSize(137, 0));
        phone->setFont(font);
        phone->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(phone);

        phoneValue = new QLineEdit(layoutWidget);
        phoneValue->setObjectName(QString::fromUtf8("phoneValue"));
        phoneValue->setFont(font);

        horizontalLayout_4->addWidget(phoneValue);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        address = new QLabel(layoutWidget);
        address->setObjectName(QString::fromUtf8("address"));
        address->setMinimumSize(QSize(137, 0));
        address->setFont(font);
        address->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(address);

        addressValue = new QLineEdit(layoutWidget);
        addressValue->setObjectName(QString::fromUtf8("addressValue"));
        addressValue->setFont(font);

        horizontalLayout_5->addWidget(addressValue);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        key = new QLabel(layoutWidget);
        key->setObjectName(QString::fromUtf8("key"));
        key->setMinimumSize(QSize(0, 0));
        key->setFont(font);
        key->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(key);

        keyValue = new QLineEdit(layoutWidget);
        keyValue->setObjectName(QString::fromUtf8("keyValue"));
        keyValue->setFont(font);
        keyValue->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(keyValue);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        registerButton = new QPushButton(layoutWidget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setMinimumSize(QSize(0, 30));
        registerButton->setFont(font);

        horizontalLayout_7->addWidget(registerButton);

        backToLogin = new QPushButton(layoutWidget);
        backToLogin->setObjectName(QString::fromUtf8("backToLogin"));
        backToLogin->setMinimumSize(QSize(0, 30));
        backToLogin->setFont(font);

        horizontalLayout_7->addWidget(backToLogin);


        verticalLayout->addLayout(horizontalLayout_7);

        label = new QLabel(signUpWindows);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 50, 700, 63));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label->setAlignment(Qt::AlignCenter);
        frame->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        label->raise();
        layoutWidget->raise();

        retranslateUi(signUpWindows);

        QMetaObject::connectSlotsByName(signUpWindows);
    } // setupUi

    void retranslateUi(QDialog *signUpWindows)
    {
        signUpWindows->setWindowTitle(QCoreApplication::translate("signUpWindows", "Dialog", nullptr));
        user->setText(QCoreApplication::translate("signUpWindows", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        userValue->setPlaceholderText(QString());
        pass->setText(QCoreApplication::translate("signUpWindows", "\345\257\206\347\240\201\357\274\232", nullptr));
        confirm->setText(QCoreApplication::translate("signUpWindows", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        phone->setText(QCoreApplication::translate("signUpWindows", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        address->setText(QCoreApplication::translate("signUpWindows", "\345\234\260\345\235\200\357\274\232", nullptr));
        key->setText(QCoreApplication::translate("signUpWindows", "\347\256\241\347\220\206\345\221\230\346\263\250\345\206\214\347\240\201:", nullptr));
        registerButton->setText(QCoreApplication::translate("signUpWindows", "\346\263\250\345\206\214", nullptr));
        backToLogin->setText(QCoreApplication::translate("signUpWindows", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("signUpWindows", "\346\254\242\350\277\216\346\263\250\345\206\214\347\273\277\344\271\213\346\272\220\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signUpWindows: public Ui_signUpWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOWS_H
