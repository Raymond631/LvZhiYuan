/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QLabel *title;
    QLineEdit *titleValue;
    QLabel *content;
    QTextEdit *contentValue;
    QPushButton *save;
    QPushButton *clear;
    QPushButton *editNotice;
    QLabel *timeLabel;
    QLabel *welcome;
    QLabel *newNotice;
    QWidget *page2;
    QTableWidget *FruitTable;
    QPushButton *addtion;
    QLineEdit *searchKey;
    QPushButton *search;
    QPushButton *saveFruit;
    QPushButton *deletion;
    QLabel *newNotice_2;
    QPushButton *insertImage;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *page4;
    QPushButton *send;
    QTableWidget *orderTable;
    QPushButton *searchOrder;
    QComboBox *orderStatus;
    QLabel *newNotice_3;
    QWidget *page5;
    QListWidget *meseagebar;
    QLabel *newNotice_4;
    QTextEdit *chatInput;
    QPushButton *chatSend;
    QPushButton *refreshChat;
    QTextBrowser *textBrowser;
    QWidget *page6;
    QPushButton *savePersonInfo;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *username;
    QLineEdit *usernameValue;
    QHBoxLayout *horizontalLayout_2;
    QLabel *password;
    QLineEdit *passwordValue;
    QHBoxLayout *horizontalLayout_5;
    QLabel *password_2;
    QLineEdit *passwordValue_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *phone;
    QLineEdit *phoneValue;
    QHBoxLayout *horizontalLayout_4;
    QLabel *address;
    QLineEdit *addressValue;
    QPushButton *editPersonInfo;
    QPushButton *logout;
    QLabel *newNotice_5;
    QListWidget *bar;
    QLabel *logo;
    QFrame *frame;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1000, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border-radius: 10px;\n"
"background-color: rgba(255, 255, 255, 225);\n"
"}\n"
"QListWidget{\n"
"font: 18pt \"\346\245\267\344\275\223\";\n"
"border-radius: 10px;\n"
"background-color: rgba(255, 255, 255, 215);\n"
"}\n"
"QListWidget::item {\n"
"height: 100px;\n"
"}\n"
"QListWidget::item:hover {\n"
"background-color: transparent;\n"
"padding: 10px;\n"
"border-left: 5px solid rgba(41, 168, 5, 225);\n"
"}\n"
"QListWidget::item:selected {\n"
"background-color: transparent;\n"
"color: rgb(67, 186, 31);\n"
"padding: 10px;\n"
"border-left: 5px solid rgba(41, 168, 5, 225);\n"
"}\n"
"QScrollBar:vertical {\n"
"border: none;\n"
"background: #f5f5f7;\n"
"width: 10px;\n"
"margin: 0px 0 0px 0;\n"
"}\n"
"QScrollBar::handle:vertical {\n"
"background: Gainsboro;\n"
"min-height: 20px;\n"
"border-radius: 5px;\n"
"border: none;\n"
"}\n"
"QScrollBar::add-line:vertical {\n"
"border: 0px solid grey;\n"
"background: #32CC99;\n"
"height: 0px;\n"
"subcontrol-position: bottom;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollB"
                        "ar::sub-line:vertical {\n"
"border: 0px solid grey;\n"
"background: #32CC99;\n"
"height: 0px;\n"
"subcontrol-position: top;\n"
"subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical {\n"
"background: none;\n"
"width: 0px;\n"
"height: 0px;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(145, 5, 850, 590));
        stackedWidget->setStyleSheet(QString::fromUtf8("*{\n"
"background-color: rgba(255, 255, 255, 150);\n"
"border-radius: 10px;\n"
"}\n"
"QLabel{\n"
"font: 18pt \"\346\245\267\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 0);\n"
"}\n"
"QLineEdit{\n"
"font: 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 200);\n"
"}\n"
"QTextEdit{\n"
"font: 12pt \"\346\245\267\344\275\223\";\n"
"background-color: rgba(255, 255, 255, 200);\n"
"}\n"
"QPushButton{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(69, 195, 47);\n"
"font: 16pt \"\346\245\267\344\275\223\";\n"
"}\n"
"QPushButton:pressed\n"
"{\n"
"	background-color: rgb(50, 141, 34);\n"
"	padding-left:3px;\n"
"	padding-top:3px;\n"
"}\n"
"QComboBox{\n"
"font: 16pt \"\346\245\267\344\275\223\";\n"
"padding: 1px 15px 1px 3px;\n"
"border:1px solid rgba(228,228,228,1);\n"
"border-radius:5px 5px 0px 0px;\n"
"} \n"
"QComboBox QAbstractItemView \n"
"{\n"
"    outline: 0px solid gray;  /*\345\217\226\346\266\210\351\200\211\344\270\255\350\231\232\347\272\277*/\n"
"    border: 1px "
                        "solid;  \n"
"    selection-background-color: rgb(90,90,90);   \n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        page1 = new QWidget();
        page1->setObjectName(QString::fromUtf8("page1"));
        title = new QLabel(page1);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(30, 160, 90, 30));
        titleValue = new QLineEdit(page1);
        titleValue->setObjectName(QString::fromUtf8("titleValue"));
        titleValue->setGeometry(QRect(120, 160, 660, 30));
        content = new QLabel(page1);
        content->setObjectName(QString::fromUtf8("content"));
        content->setGeometry(QRect(30, 200, 90, 30));
        content->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        contentValue = new QTextEdit(page1);
        contentValue->setObjectName(QString::fromUtf8("contentValue"));
        contentValue->setGeometry(QRect(120, 200, 660, 250));
        save = new QPushButton(page1);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(550, 480, 150, 40));
        clear = new QPushButton(page1);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(360, 480, 150, 40));
        editNotice = new QPushButton(page1);
        editNotice->setObjectName(QString::fromUtf8("editNotice"));
        editNotice->setGeometry(QRect(170, 480, 150, 40));
        timeLabel = new QLabel(page1);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(20, 10, 300, 30));
        welcome = new QLabel(page1);
        welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->setGeometry(QRect(420, 10, 400, 30));
        welcome->setAlignment(Qt::AlignCenter);
        newNotice = new QLabel(page1);
        newNotice->setObjectName(QString::fromUtf8("newNotice"));
        newNotice->setGeometry(QRect(0, 80, 850, 50));
        newNotice->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        newNotice->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        FruitTable = new QTableWidget(page2);
        if (FruitTable->columnCount() < 9)
            FruitTable->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        FruitTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        FruitTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        FruitTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        FruitTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        FruitTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        FruitTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        FruitTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        FruitTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        FruitTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        FruitTable->setObjectName(QString::fromUtf8("FruitTable"));
        FruitTable->setGeometry(QRect(5, 120, 840, 400));
        FruitTable->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";\n"
"border-radius: 10px;"));
        FruitTable->setEditTriggers(QAbstractItemView::DoubleClicked);
        FruitTable->setRowCount(0);
        FruitTable->horizontalHeader()->setCascadingSectionResizes(false);
        FruitTable->horizontalHeader()->setDefaultSectionSize(92);
        FruitTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        FruitTable->verticalHeader()->setVisible(false);
        addtion = new QPushButton(page2);
        addtion->setObjectName(QString::fromUtf8("addtion"));
        addtion->setGeometry(QRect(10, 535, 125, 40));
        searchKey = new QLineEdit(page2);
        searchKey->setObjectName(QString::fromUtf8("searchKey"));
        searchKey->setGeometry(QRect(5, 75, 621, 40));
        search = new QPushButton(page2);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(660, 75, 150, 40));
        saveFruit = new QPushButton(page2);
        saveFruit->setObjectName(QString::fromUtf8("saveFruit"));
        saveFruit->setGeometry(QRect(160, 535, 125, 40));
        deletion = new QPushButton(page2);
        deletion->setObjectName(QString::fromUtf8("deletion"));
        deletion->setGeometry(QRect(310, 535, 125, 40));
        newNotice_2 = new QLabel(page2);
        newNotice_2->setObjectName(QString::fromUtf8("newNotice_2"));
        newNotice_2->setGeometry(QRect(0, 10, 850, 50));
        newNotice_2->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        newNotice_2->setAlignment(Qt::AlignCenter);
        insertImage = new QPushButton(page2);
        insertImage->setObjectName(QString::fromUtf8("insertImage"));
        insertImage->setGeometry(QRect(710, 535, 125, 40));
        lineEdit = new QLineEdit(page2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(600, 535, 100, 40));
        label = new QLabel(page2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 535, 141, 40));
        stackedWidget->addWidget(page2);
        page4 = new QWidget();
        page4->setObjectName(QString::fromUtf8("page4"));
        send = new QPushButton(page4);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(690, 540, 125, 40));
        orderTable = new QTableWidget(page4);
        if (orderTable->columnCount() < 10)
            orderTable->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(7, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(8, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(9, __qtablewidgetitem18);
        orderTable->setObjectName(QString::fromUtf8("orderTable"));
        orderTable->setGeometry(QRect(5, 120, 840, 400));
        orderTable->setStyleSheet(QString::fromUtf8("font: 11pt \"\346\245\267\344\275\223\";\n"
"border-radius: 10px;"));
        orderTable->setEditTriggers(QAbstractItemView::DoubleClicked);
        orderTable->setRowCount(0);
        orderTable->horizontalHeader()->setCascadingSectionResizes(false);
        orderTable->horizontalHeader()->setMinimumSectionSize(32);
        orderTable->horizontalHeader()->setDefaultSectionSize(83);
        orderTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        orderTable->verticalHeader()->setVisible(false);
        searchOrder = new QPushButton(page4);
        searchOrder->setObjectName(QString::fromUtf8("searchOrder"));
        searchOrder->setGeometry(QRect(180, 70, 125, 40));
        orderStatus = new QComboBox(page4);
        orderStatus->addItem(QString());
        orderStatus->addItem(QString());
        orderStatus->addItem(QString());
        orderStatus->addItem(QString());
        orderStatus->addItem(QString());
        orderStatus->setObjectName(QString::fromUtf8("orderStatus"));
        orderStatus->setGeometry(QRect(15, 75, 150, 30));
        newNotice_3 = new QLabel(page4);
        newNotice_3->setObjectName(QString::fromUtf8("newNotice_3"));
        newNotice_3->setGeometry(QRect(0, 10, 850, 50));
        newNotice_3->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        newNotice_3->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName(QString::fromUtf8("page5"));
        meseagebar = new QListWidget(page5);
        meseagebar->setObjectName(QString::fromUtf8("meseagebar"));
        meseagebar->setGeometry(QRect(0, 75, 150, 510));
        meseagebar->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"font: 14pt \"\346\245\267\344\275\223\";\n"
"border-radius: 10px;\n"
"background-color: rgba(255, 255, 255, 200);\n"
"}\n"
"QListWidget::item {\n"
"height: 50px;\n"
"}\n"
"QListWidget::item:hover {\n"
"padding: 10px;\n"
"border-left: 5px solid rgba(41, 168, 5, 225);\n"
"}\n"
"QListWidget::item:selected {\n"
"color: rgb(67, 186, 31);\n"
"padding: 10px;\n"
"border-left: 5px solid rgba(41, 168, 5, 225);\n"
"}"));
        meseagebar->setBatchSize(100);
        newNotice_4 = new QLabel(page5);
        newNotice_4->setObjectName(QString::fromUtf8("newNotice_4"));
        newNotice_4->setGeometry(QRect(0, 10, 850, 50));
        newNotice_4->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        newNotice_4->setAlignment(Qt::AlignCenter);
        chatInput = new QTextEdit(page5);
        chatInput->setObjectName(QString::fromUtf8("chatInput"));
        chatInput->setGeometry(QRect(155, 430, 600, 155));
        chatSend = new QPushButton(page5);
        chatSend->setObjectName(QString::fromUtf8("chatSend"));
        chatSend->setGeometry(QRect(760, 430, 85, 155));
        refreshChat = new QPushButton(page5);
        refreshChat->setObjectName(QString::fromUtf8("refreshChat"));
        refreshChat->setGeometry(QRect(10, 35, 130, 30));
        textBrowser = new QTextBrowser(page5);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(155, 75, 690, 350));
        stackedWidget->addWidget(page5);
        page6 = new QWidget();
        page6->setObjectName(QString::fromUtf8("page6"));
        savePersonInfo = new QPushButton(page6);
        savePersonInfo->setObjectName(QString::fromUtf8("savePersonInfo"));
        savePersonInfo->setGeometry(QRect(320, 490, 200, 50));
        layoutWidget = new QWidget(page6);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 80, 831, 361));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(100, 65, 100, 65);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        username = new QLabel(layoutWidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(150, 0));
        username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(username);

        usernameValue = new QLineEdit(layoutWidget);
        usernameValue->setObjectName(QString::fromUtf8("usernameValue"));
        usernameValue->setMinimumSize(QSize(0, 30));
        usernameValue->setReadOnly(true);

        horizontalLayout->addWidget(usernameValue);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        password = new QLabel(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(password);

        passwordValue = new QLineEdit(layoutWidget);
        passwordValue->setObjectName(QString::fromUtf8("passwordValue"));
        passwordValue->setMinimumSize(QSize(0, 30));
        passwordValue->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordValue);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        password_2 = new QLabel(layoutWidget);
        password_2->setObjectName(QString::fromUtf8("password_2"));
        password_2->setMinimumSize(QSize(150, 0));

        horizontalLayout_5->addWidget(password_2);

        passwordValue_2 = new QLineEdit(layoutWidget);
        passwordValue_2->setObjectName(QString::fromUtf8("passwordValue_2"));
        passwordValue_2->setMinimumSize(QSize(0, 30));
        passwordValue_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(passwordValue_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        phone = new QLabel(layoutWidget);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(phone);

        phoneValue = new QLineEdit(layoutWidget);
        phoneValue->setObjectName(QString::fromUtf8("phoneValue"));
        phoneValue->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(phoneValue);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        address = new QLabel(layoutWidget);
        address->setObjectName(QString::fromUtf8("address"));
        address->setMinimumSize(QSize(150, 0));

        horizontalLayout_4->addWidget(address);

        addressValue = new QLineEdit(layoutWidget);
        addressValue->setObjectName(QString::fromUtf8("addressValue"));
        addressValue->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(addressValue);


        verticalLayout->addLayout(horizontalLayout_4);

        editPersonInfo = new QPushButton(page6);
        editPersonInfo->setObjectName(QString::fromUtf8("editPersonInfo"));
        editPersonInfo->setGeometry(QRect(70, 490, 200, 50));
        logout = new QPushButton(page6);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(570, 490, 200, 50));
        newNotice_5 = new QLabel(page6);
        newNotice_5->setObjectName(QString::fromUtf8("newNotice_5"));
        newNotice_5->setGeometry(QRect(0, 10, 850, 50));
        newNotice_5->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        newNotice_5->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page6);
        bar = new QListWidget(centralwidget);
        new QListWidgetItem(bar);
        new QListWidgetItem(bar);
        new QListWidgetItem(bar);
        new QListWidgetItem(bar);
        new QListWidgetItem(bar);
        bar->setObjectName(QString::fromUtf8("bar"));
        bar->setGeometry(QRect(5, 60, 135, 535));
        bar->setStyleSheet(QString::fromUtf8(""));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(5, 5, 135, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(28);
        logo->setFont(font);
        logo->setStyleSheet(QString::fromUtf8("color: rgb(67, 186, 31);"));
        logo->setAlignment(Qt::AlignCenter);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1000, 600));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/img/spring-4158957_640.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralwidget);
        frame->raise();
        stackedWidget->raise();
        bar->raise();
        logo->raise();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\273\277\344\271\213\346\272\220", nullptr));
        title->setText(QCoreApplication::translate("MainWindow", "\346\240\207\351\242\230\357\274\232", nullptr));
        content->setText(QCoreApplication::translate("MainWindow", "\345\206\205\345\256\271\357\274\232", nullptr));
        save->setText(QCoreApplication::translate("MainWindow", "\345\217\221\345\270\203", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        editNotice->setText(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221", nullptr));
        timeLabel->setText(QString());
        welcome->setText(QString());
        newNotice->setText(QCoreApplication::translate("MainWindow", "\345\205\254\345\221\212\350\256\276\347\275\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem = FruitTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = FruitTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = FruitTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = FruitTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\347\261\273\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = FruitTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\344\272\247\345\234\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = FruitTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = FruitTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\351\224\200\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = FruitTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\345\272\223\345\255\230", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = FruitTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\346\211\271\351\207\217\345\210\240\351\231\244", nullptr));
        addtion->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        searchKey->setText(QString());
        searchKey->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\260\264\346\236\234\347\232\204\345\220\215\347\247\260", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        saveFruit->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        deletion->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        newNotice_2->setText(QCoreApplication::translate("MainWindow", "\346\260\264\346\236\234\347\256\241\347\220\206", nullptr));
        insertImage->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\274\240\345\233\276\347\211\207", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\260\264\346\236\234\347\274\226\345\217\267\357\274\232", nullptr));
        send->setText(QCoreApplication::translate("MainWindow", "\345\217\221\350\264\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = orderTable->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = orderTable->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\215\225\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = orderTable->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = orderTable->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "\346\260\264\346\236\234\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = orderTable->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\350\264\255\344\271\260\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = orderTable->horizontalHeaderItem(5);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "\346\200\273\351\207\221\351\242\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = orderTable->horizontalHeaderItem(6);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = orderTable->horizontalHeaderItem(7);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "\346\224\266\350\264\247\345\234\260\345\235\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = orderTable->horizontalHeaderItem(8);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = orderTable->horizontalHeaderItem(9);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "\346\211\271\351\207\217\346\223\215\344\275\234", nullptr));
        searchOrder->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        orderStatus->setItemText(0, QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250\350\256\242\345\215\225", nullptr));
        orderStatus->setItemText(1, QCoreApplication::translate("MainWindow", "\346\210\220\345\212\237\350\256\242\345\215\225", nullptr));
        orderStatus->setItemText(2, QCoreApplication::translate("MainWindow", "\345\244\261\350\264\245\350\256\242\345\215\225", nullptr));
        orderStatus->setItemText(3, QCoreApplication::translate("MainWindow", "\345\267\262\351\205\215\351\200\201\350\256\242\345\215\225", nullptr));
        orderStatus->setItemText(4, QCoreApplication::translate("MainWindow", "\346\234\252\351\205\215\351\200\201\350\256\242\345\215\225", nullptr));

        newNotice_3->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));
        newNotice_4->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\346\266\210\346\201\257", nullptr));
        chatSend->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        refreshChat->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        savePersonInfo->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        username->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        password->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        password_2->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        phone->setText(QCoreApplication::translate("MainWindow", "\347\224\265\350\257\235\357\274\232", nullptr));
        address->setText(QCoreApplication::translate("MainWindow", "\346\224\266\350\264\247\345\234\260\345\235\200\357\274\232", nullptr));
        editPersonInfo->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        logout->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        newNotice_5->setText(QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));

        const bool __sortingEnabled = bar->isSortingEnabled();
        bar->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = bar->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "\351\246\226\351\241\265\350\256\276\347\275\256", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = bar->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "\346\260\264\346\236\234\347\256\241\347\220\206", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = bar->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = bar->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\210\267\346\266\210\346\201\257", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = bar->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        bar->setSortingEnabled(__sortingEnabled);

        logo->setText(QCoreApplication::translate("MainWindow", "\347\273\277\344\271\213\346\272\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
