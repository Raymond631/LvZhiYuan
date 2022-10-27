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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signUpWindows
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *user;
    QSpacerItem *verticalSpacer;
    QLabel *pass;
    QSpacerItem *verticalSpacer_3;
    QLabel *confirm;
    QSpacerItem *verticalSpacer_4;
    QLabel *phone;
    QSpacerItem *verticalSpacer_5;
    QLabel *address;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *userValue;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *passValue;
    QSpacerItem *verticalSpacer_6;
    QLineEdit *confirmValue;
    QSpacerItem *verticalSpacer_7;
    QLineEdit *phoneValue;
    QSpacerItem *verticalSpacer_8;
    QLineEdit *addressValue;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *registerButton;
    QPushButton *backToLogin;

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
        layoutWidget->setGeometry(QRect(0, 0, 701, 495));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(125, 50, 125, 80);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 36pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        user = new QLabel(layoutWidget);
        user->setObjectName(QString::fromUtf8("user"));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        user->setFont(font);
        user->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(user);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pass = new QLabel(layoutWidget);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setFont(font);
        pass->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(pass);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        confirm = new QLabel(layoutWidget);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setFont(font);
        confirm->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(confirm);

        verticalSpacer_4 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        phone = new QLabel(layoutWidget);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setFont(font);
        phone->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(phone);

        verticalSpacer_5 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        address = new QLabel(layoutWidget);
        address->setObjectName(QString::fromUtf8("address"));
        address->setFont(font);
        address->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(address);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        userValue = new QLineEdit(layoutWidget);
        userValue->setObjectName(QString::fromUtf8("userValue"));
        userValue->setFont(font);

        verticalLayout_2->addWidget(userValue);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        passValue = new QLineEdit(layoutWidget);
        passValue->setObjectName(QString::fromUtf8("passValue"));
        passValue->setFont(font);
        passValue->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(passValue);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        confirmValue = new QLineEdit(layoutWidget);
        confirmValue->setObjectName(QString::fromUtf8("confirmValue"));
        confirmValue->setFont(font);
        confirmValue->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(confirmValue);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_7);

        phoneValue = new QLineEdit(layoutWidget);
        phoneValue->setObjectName(QString::fromUtf8("phoneValue"));
        phoneValue->setFont(font);

        verticalLayout_2->addWidget(phoneValue);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        addressValue = new QLineEdit(layoutWidget);
        addressValue->setObjectName(QString::fromUtf8("addressValue"));
        addressValue->setFont(font);

        verticalLayout_2->addWidget(addressValue);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer_9 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_9);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        registerButton = new QPushButton(layoutWidget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setMinimumSize(QSize(0, 30));
        registerButton->setFont(font);

        horizontalLayout_2->addWidget(registerButton);

        backToLogin = new QPushButton(layoutWidget);
        backToLogin->setObjectName(QString::fromUtf8("backToLogin"));
        backToLogin->setMinimumSize(QSize(0, 30));
        backToLogin->setFont(font);

        horizontalLayout_2->addWidget(backToLogin);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(signUpWindows);

        QMetaObject::connectSlotsByName(signUpWindows);
    } // setupUi

    void retranslateUi(QDialog *signUpWindows)
    {
        signUpWindows->setWindowTitle(QCoreApplication::translate("signUpWindows", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("signUpWindows", "\346\254\242\350\277\216\346\263\250\345\206\214\347\273\277\344\271\213\346\272\220", nullptr));
        user->setText(QCoreApplication::translate("signUpWindows", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        pass->setText(QCoreApplication::translate("signUpWindows", "\345\257\206\347\240\201\357\274\232", nullptr));
        confirm->setText(QCoreApplication::translate("signUpWindows", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        phone->setText(QCoreApplication::translate("signUpWindows", "\346\211\213\346\234\272\345\217\267\357\274\232", nullptr));
        address->setText(QCoreApplication::translate("signUpWindows", "\345\234\260\345\235\200\357\274\232", nullptr));
        userValue->setPlaceholderText(QString());
        registerButton->setText(QCoreApplication::translate("signUpWindows", "\346\263\250\345\206\214", nullptr));
        backToLogin->setText(QCoreApplication::translate("signUpWindows", "\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signUpWindows: public Ui_signUpWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOWS_H
