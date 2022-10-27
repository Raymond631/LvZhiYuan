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
#include <QtWidgets/QSpacerItem>
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
    QFrame *frame;
    QListWidget *bar;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QLineEdit *titleValue;
    QTextEdit *contentValue;
    QLabel *newNotice;
    QLabel *timeLabel;
    QLabel *welcome;
    QLabel *noticeTime;
    QWidget *page2;
    QLineEdit *searchKey;
    QPushButton *search;
    QLabel *fruitDisplay;
    QComboBox *sortBox;
    QPushButton *sortBtn;
    QLabel *fruit_picture;
    QPushButton *pgUp;
    QPushButton *pgDw;
    QWidget *layoutWidget;
    QHBoxLayout *function;
    QPushButton *collect;
    QSpacerItem *horizontalSpacer;
    QLineEdit *buyNum;
    QPushButton *addToCart;
    QWidget *layoutWidget1;
    QHBoxLayout *item_sort;
    QLabel *label_2;
    QPushButton *sort1;
    QPushButton *sort2;
    QPushButton *sort3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *des1;
    QLabel *label_3;
    QLabel *fruit_name;
    QHBoxLayout *des2;
    QLabel *label_10;
    QLabel *fruit_price;
    QHBoxLayout *des3;
    QLabel *label_12;
    QLabel *fruit_sort;
    QHBoxLayout *des4;
    QLabel *label_14;
    QLabel *fruit_origin;
    QHBoxLayout *des5;
    QLabel *label_16;
    QLabel *fruit_sale;
    QHBoxLayout *des6;
    QLabel *label_18;
    QLabel *fruit_stock;
    QWidget *page3;
    QTableWidget *favoritesTable;
    QPushButton *refreshFavorites;
    QPushButton *deleteFavorites;
    QLabel *favoritesLabel;
    QWidget *page4;
    QTableWidget *cartTable;
    QPushButton *deleteCart;
    QPushButton *submitCart;
    QLabel *money;
    QLabel *cartLabel;
    QWidget *page5;
    QPushButton *receipt;
    QTableWidget *orderTable;
    QPushButton *searchOrder;
    QComboBox *orderStatus;
    QPushButton *cancel;
    QLabel *orderLabel;
    QWidget *page6;
    QLabel *messageLabel;
    QTextBrowser *chatRecord;
    QTextEdit *chatInput;
    QPushButton *chatSend;
    QPushButton *loadChat;
    QWidget *page7;
    QPushButton *savePersonInfo;
    QWidget *layoutWidget3;
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
    QLabel *infoLabel;
    QLabel *logo;

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
"height: 75px;\n"
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
"QScrollBa"
                        "r::sub-line:vertical {\n"
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
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 1000, 600));
        frame->setStyleSheet(QString::fromUtf8("border-image: url(:/img/spring-4158957_640.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        bar = new QListWidget(centralwidget);
        new QListWidgetItem(bar);
        new QListWidgetItem(bar);
        new QListWidgetItem(bar);
        new QListWidgetItem(bar);
        new QListWidgetItem(bar);
        new QListWidgetItem(bar);
        new QListWidgetItem(bar);
        bar->setObjectName(QString::fromUtf8("bar"));
        bar->setGeometry(QRect(5, 60, 135, 535));
        bar->setStyleSheet(QString::fromUtf8(""));
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
"font: 14pt \"\346\245\267\344\275\223\";\n"
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
        titleValue = new QLineEdit(page1);
        titleValue->setObjectName(QString::fromUtf8("titleValue"));
        titleValue->setGeometry(QRect(90, 160, 670, 30));
        titleValue->setAlignment(Qt::AlignCenter);
        contentValue = new QTextEdit(page1);
        contentValue->setObjectName(QString::fromUtf8("contentValue"));
        contentValue->setGeometry(QRect(90, 192, 670, 270));
        newNotice = new QLabel(page1);
        newNotice->setObjectName(QString::fromUtf8("newNotice"));
        newNotice->setGeometry(QRect(0, 80, 850, 50));
        newNotice->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        newNotice->setAlignment(Qt::AlignCenter);
        timeLabel = new QLabel(page1);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(20, 10, 300, 30));
        welcome = new QLabel(page1);
        welcome->setObjectName(QString::fromUtf8("welcome"));
        welcome->setGeometry(QRect(420, 10, 400, 30));
        welcome->setAlignment(Qt::AlignCenter);
        noticeTime = new QLabel(page1);
        noticeTime->setObjectName(QString::fromUtf8("noticeTime"));
        noticeTime->setGeometry(QRect(460, 470, 300, 30));
        noticeTime->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";\n"
"text-decoration: underline;"));
        noticeTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QString::fromUtf8("page2"));
        searchKey = new QLineEdit(page2);
        searchKey->setObjectName(QString::fromUtf8("searchKey"));
        searchKey->setGeometry(QRect(420, 65, 261, 40));
        search = new QPushButton(page2);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(690, 65, 150, 40));
        fruitDisplay = new QLabel(page2);
        fruitDisplay->setObjectName(QString::fromUtf8("fruitDisplay"));
        fruitDisplay->setGeometry(QRect(0, 10, 850, 50));
        fruitDisplay->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        fruitDisplay->setAlignment(Qt::AlignCenter);
        sortBox = new QComboBox(page2);
        sortBox->addItem(QString());
        sortBox->addItem(QString());
        sortBox->addItem(QString());
        sortBox->addItem(QString());
        sortBox->addItem(QString());
        sortBox->addItem(QString());
        sortBox->setObjectName(QString::fromUtf8("sortBox"));
        sortBox->setGeometry(QRect(10, 65, 221, 40));
        sortBtn = new QPushButton(page2);
        sortBtn->setObjectName(QString::fromUtf8("sortBtn"));
        sortBtn->setGeometry(QRect(250, 65, 150, 40));
        fruit_picture = new QLabel(page2);
        fruit_picture->setObjectName(QString::fromUtf8("fruit_picture"));
        fruit_picture->setGeometry(QRect(10, 160, 401, 361));
        fruit_picture->setPixmap(QPixmap(QString::fromUtf8(":/img/spring-4158957_640.jpg")));
        fruit_picture->setAlignment(Qt::AlignCenter);
        pgUp = new QPushButton(page2);
        pgUp->setObjectName(QString::fromUtf8("pgUp"));
        pgUp->setGeometry(QRect(460, 530, 150, 35));
        pgDw = new QPushButton(page2);
        pgDw->setObjectName(QString::fromUtf8("pgDw"));
        pgDw->setGeometry(QRect(640, 530, 150, 35));
        layoutWidget = new QWidget(page2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 530, 351, 41));
        function = new QHBoxLayout(layoutWidget);
        function->setObjectName(QString::fromUtf8("function"));
        function->setContentsMargins(0, 0, 0, 0);
        collect = new QPushButton(layoutWidget);
        collect->setObjectName(QString::fromUtf8("collect"));
        collect->setMinimumSize(QSize(100, 35));
        collect->setMaximumSize(QSize(100, 16777215));

        function->addWidget(collect);

        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        function->addItem(horizontalSpacer);

        buyNum = new QLineEdit(layoutWidget);
        buyNum->setObjectName(QString::fromUtf8("buyNum"));
        buyNum->setMinimumSize(QSize(50, 35));
        buyNum->setMaximumSize(QSize(50, 35));
        buyNum->setAlignment(Qt::AlignCenter);

        function->addWidget(buyNum);

        addToCart = new QPushButton(layoutWidget);
        addToCart->setObjectName(QString::fromUtf8("addToCart"));
        addToCart->setMinimumSize(QSize(150, 35));
        addToCart->setMaximumSize(QSize(150, 35));

        function->addWidget(addToCart);

        layoutWidget1 = new QWidget(page2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 110, 401, 51));
        item_sort = new QHBoxLayout(layoutWidget1);
        item_sort->setObjectName(QString::fromUtf8("item_sort"));
        item_sort->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(100, 16777215));
        label_2->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        item_sort->addWidget(label_2);

        sort1 = new QPushButton(layoutWidget1);
        sort1->setObjectName(QString::fromUtf8("sort1"));
        sort1->setMinimumSize(QSize(0, 35));
        sort1->setMaximumSize(QSize(75, 16777215));
        sort1->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        item_sort->addWidget(sort1);

        sort2 = new QPushButton(layoutWidget1);
        sort2->setObjectName(QString::fromUtf8("sort2"));
        sort2->setMinimumSize(QSize(0, 35));
        sort2->setMaximumSize(QSize(75, 16777215));
        sort2->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        item_sort->addWidget(sort2);

        sort3 = new QPushButton(layoutWidget1);
        sort3->setObjectName(QString::fromUtf8("sort3"));
        sort3->setMinimumSize(QSize(0, 35));
        sort3->setMaximumSize(QSize(75, 16777215));
        sort3->setStyleSheet(QString::fromUtf8("font: 12pt \"\346\245\267\344\275\223\";"));

        item_sort->addWidget(sort3);

        layoutWidget2 = new QWidget(page2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(420, 110, 421, 411));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        des1 = new QHBoxLayout();
        des1->setObjectName(QString::fromUtf8("des1"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(90, 30));
        label_3->setMaximumSize(QSize(90, 30));

        des1->addWidget(label_3);

        fruit_name = new QLabel(layoutWidget2);
        fruit_name->setObjectName(QString::fromUtf8("fruit_name"));
        fruit_name->setMinimumSize(QSize(300, 50));
        fruit_name->setMaximumSize(QSize(300, 50));
        fruit_name->setWordWrap(true);

        des1->addWidget(fruit_name);


        verticalLayout_2->addLayout(des1);

        des2 = new QHBoxLayout();
        des2->setObjectName(QString::fromUtf8("des2"));
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(90, 30));
        label_10->setMaximumSize(QSize(90, 30));

        des2->addWidget(label_10);

        fruit_price = new QLabel(layoutWidget2);
        fruit_price->setObjectName(QString::fromUtf8("fruit_price"));
        fruit_price->setMinimumSize(QSize(300, 50));
        fruit_price->setMaximumSize(QSize(300, 50));
        fruit_price->setWordWrap(true);

        des2->addWidget(fruit_price);


        verticalLayout_2->addLayout(des2);

        des3 = new QHBoxLayout();
        des3->setObjectName(QString::fromUtf8("des3"));
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(90, 30));
        label_12->setMaximumSize(QSize(90, 30));

        des3->addWidget(label_12);

        fruit_sort = new QLabel(layoutWidget2);
        fruit_sort->setObjectName(QString::fromUtf8("fruit_sort"));
        fruit_sort->setMinimumSize(QSize(300, 50));
        fruit_sort->setMaximumSize(QSize(300, 50));
        fruit_sort->setWordWrap(true);

        des3->addWidget(fruit_sort);


        verticalLayout_2->addLayout(des3);

        des4 = new QHBoxLayout();
        des4->setObjectName(QString::fromUtf8("des4"));
        label_14 = new QLabel(layoutWidget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(90, 30));
        label_14->setMaximumSize(QSize(90, 30));

        des4->addWidget(label_14);

        fruit_origin = new QLabel(layoutWidget2);
        fruit_origin->setObjectName(QString::fromUtf8("fruit_origin"));
        fruit_origin->setMinimumSize(QSize(300, 50));
        fruit_origin->setMaximumSize(QSize(300, 50));
        fruit_origin->setWordWrap(true);

        des4->addWidget(fruit_origin);


        verticalLayout_2->addLayout(des4);

        des5 = new QHBoxLayout();
        des5->setObjectName(QString::fromUtf8("des5"));
        label_16 = new QLabel(layoutWidget2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(90, 30));
        label_16->setMaximumSize(QSize(90, 30));

        des5->addWidget(label_16);

        fruit_sale = new QLabel(layoutWidget2);
        fruit_sale->setObjectName(QString::fromUtf8("fruit_sale"));
        fruit_sale->setMinimumSize(QSize(300, 50));
        fruit_sale->setMaximumSize(QSize(300, 50));
        fruit_sale->setWordWrap(true);

        des5->addWidget(fruit_sale);


        verticalLayout_2->addLayout(des5);

        des6 = new QHBoxLayout();
        des6->setObjectName(QString::fromUtf8("des6"));
        label_18 = new QLabel(layoutWidget2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(90, 30));
        label_18->setMaximumSize(QSize(90, 30));

        des6->addWidget(label_18);

        fruit_stock = new QLabel(layoutWidget2);
        fruit_stock->setObjectName(QString::fromUtf8("fruit_stock"));
        fruit_stock->setMinimumSize(QSize(300, 50));
        fruit_stock->setMaximumSize(QSize(300, 50));
        fruit_stock->setWordWrap(true);

        des6->addWidget(fruit_stock);


        verticalLayout_2->addLayout(des6);

        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QString::fromUtf8("page3"));
        favoritesTable = new QTableWidget(page3);
        if (favoritesTable->columnCount() < 5)
            favoritesTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        favoritesTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        favoritesTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        favoritesTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        favoritesTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        favoritesTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        favoritesTable->setObjectName(QString::fromUtf8("favoritesTable"));
        favoritesTable->setGeometry(QRect(5, 75, 840, 400));
        favoritesTable->setStyleSheet(QString::fromUtf8("font: 11pt \"\346\245\267\344\275\223\";\n"
"border-radius: 10px;"));
        favoritesTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        favoritesTable->setRowCount(0);
        favoritesTable->horizontalHeader()->setCascadingSectionResizes(false);
        favoritesTable->horizontalHeader()->setMinimumSectionSize(32);
        favoritesTable->horizontalHeader()->setDefaultSectionSize(166);
        favoritesTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        favoritesTable->horizontalHeader()->setStretchLastSection(false);
        favoritesTable->verticalHeader()->setVisible(false);
        refreshFavorites = new QPushButton(page3);
        refreshFavorites->setObjectName(QString::fromUtf8("refreshFavorites"));
        refreshFavorites->setGeometry(QRect(480, 520, 125, 40));
        deleteFavorites = new QPushButton(page3);
        deleteFavorites->setObjectName(QString::fromUtf8("deleteFavorites"));
        deleteFavorites->setGeometry(QRect(690, 520, 125, 40));
        favoritesLabel = new QLabel(page3);
        favoritesLabel->setObjectName(QString::fromUtf8("favoritesLabel"));
        favoritesLabel->setGeometry(QRect(0, 10, 850, 50));
        favoritesLabel->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        favoritesLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page3);
        page4 = new QWidget();
        page4->setObjectName(QString::fromUtf8("page4"));
        cartTable = new QTableWidget(page4);
        if (cartTable->columnCount() < 5)
            cartTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        cartTable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        cartTable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        cartTable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        cartTable->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        cartTable->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        cartTable->setObjectName(QString::fromUtf8("cartTable"));
        cartTable->setGeometry(QRect(5, 80, 840, 400));
        cartTable->setStyleSheet(QString::fromUtf8("font: 11pt \"\346\245\267\344\275\223\";\n"
"border-radius: 10px;"));
        cartTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        cartTable->setRowCount(0);
        cartTable->horizontalHeader()->setCascadingSectionResizes(false);
        cartTable->horizontalHeader()->setMinimumSectionSize(32);
        cartTable->horizontalHeader()->setDefaultSectionSize(165);
        cartTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        cartTable->verticalHeader()->setVisible(false);
        deleteCart = new QPushButton(page4);
        deleteCart->setObjectName(QString::fromUtf8("deleteCart"));
        deleteCart->setGeometry(QRect(680, 500, 125, 40));
        submitCart = new QPushButton(page4);
        submitCart->setObjectName(QString::fromUtf8("submitCart"));
        submitCart->setGeometry(QRect(280, 540, 280, 40));
        money = new QLabel(page4);
        money->setObjectName(QString::fromUtf8("money"));
        money->setGeometry(QRect(10, 500, 250, 30));
        money->setStyleSheet(QString::fromUtf8("font: 18pt \"\346\245\267\344\275\223\";"));
        cartLabel = new QLabel(page4);
        cartLabel->setObjectName(QString::fromUtf8("cartLabel"));
        cartLabel->setGeometry(QRect(0, 10, 850, 50));
        cartLabel->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        cartLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page4);
        page5 = new QWidget();
        page5->setObjectName(QString::fromUtf8("page5"));
        receipt = new QPushButton(page5);
        receipt->setObjectName(QString::fromUtf8("receipt"));
        receipt->setGeometry(QRect(690, 540, 125, 40));
        orderTable = new QTableWidget(page5);
        if (orderTable->columnCount() < 7)
            orderTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        orderTable->setHorizontalHeaderItem(6, __qtablewidgetitem16);
        orderTable->setObjectName(QString::fromUtf8("orderTable"));
        orderTable->setGeometry(QRect(5, 120, 840, 400));
        orderTable->setStyleSheet(QString::fromUtf8("font: 11pt \"\346\245\267\344\275\223\";\n"
"border-radius: 10px;"));
        orderTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        orderTable->setRowCount(0);
        orderTable->horizontalHeader()->setCascadingSectionResizes(false);
        orderTable->horizontalHeader()->setMinimumSectionSize(32);
        orderTable->horizontalHeader()->setDefaultSectionSize(118);
        orderTable->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        orderTable->verticalHeader()->setVisible(false);
        searchOrder = new QPushButton(page5);
        searchOrder->setObjectName(QString::fromUtf8("searchOrder"));
        searchOrder->setGeometry(QRect(180, 70, 125, 40));
        orderStatus = new QComboBox(page5);
        orderStatus->addItem(QString());
        orderStatus->addItem(QString());
        orderStatus->addItem(QString());
        orderStatus->addItem(QString());
        orderStatus->addItem(QString());
        orderStatus->setObjectName(QString::fromUtf8("orderStatus"));
        orderStatus->setGeometry(QRect(15, 75, 150, 30));
        cancel = new QPushButton(page5);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(520, 540, 125, 40));
        orderLabel = new QLabel(page5);
        orderLabel->setObjectName(QString::fromUtf8("orderLabel"));
        orderLabel->setGeometry(QRect(0, 10, 850, 50));
        orderLabel->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        orderLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page5);
        page6 = new QWidget();
        page6->setObjectName(QString::fromUtf8("page6"));
        messageLabel = new QLabel(page6);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        messageLabel->setGeometry(QRect(0, 10, 850, 50));
        messageLabel->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        messageLabel->setAlignment(Qt::AlignCenter);
        chatRecord = new QTextBrowser(page6);
        chatRecord->setObjectName(QString::fromUtf8("chatRecord"));
        chatRecord->setGeometry(QRect(5, 75, 840, 350));
        chatInput = new QTextEdit(page6);
        chatInput->setObjectName(QString::fromUtf8("chatInput"));
        chatInput->setGeometry(QRect(5, 430, 750, 155));
        chatSend = new QPushButton(page6);
        chatSend->setObjectName(QString::fromUtf8("chatSend"));
        chatSend->setGeometry(QRect(760, 430, 85, 155));
        loadChat = new QPushButton(page6);
        loadChat->setObjectName(QString::fromUtf8("loadChat"));
        loadChat->setGeometry(QRect(745, 38, 100, 32));
        stackedWidget->addWidget(page6);
        page7 = new QWidget();
        page7->setObjectName(QString::fromUtf8("page7"));
        savePersonInfo = new QPushButton(page7);
        savePersonInfo->setObjectName(QString::fromUtf8("savePersonInfo"));
        savePersonInfo->setGeometry(QRect(320, 490, 200, 50));
        layoutWidget3 = new QWidget(page7);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 80, 831, 361));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(100, 65, 100, 65);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        username = new QLabel(layoutWidget3);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(150, 0));
        username->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(username);

        usernameValue = new QLineEdit(layoutWidget3);
        usernameValue->setObjectName(QString::fromUtf8("usernameValue"));
        usernameValue->setMinimumSize(QSize(0, 30));
        usernameValue->setReadOnly(true);

        horizontalLayout->addWidget(usernameValue);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        password = new QLabel(layoutWidget3);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(password);

        passwordValue = new QLineEdit(layoutWidget3);
        passwordValue->setObjectName(QString::fromUtf8("passwordValue"));
        passwordValue->setMinimumSize(QSize(0, 30));
        passwordValue->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordValue);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        password_2 = new QLabel(layoutWidget3);
        password_2->setObjectName(QString::fromUtf8("password_2"));
        password_2->setMinimumSize(QSize(150, 0));

        horizontalLayout_5->addWidget(password_2);

        passwordValue_2 = new QLineEdit(layoutWidget3);
        passwordValue_2->setObjectName(QString::fromUtf8("passwordValue_2"));
        passwordValue_2->setMinimumSize(QSize(0, 30));
        passwordValue_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(passwordValue_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        phone = new QLabel(layoutWidget3);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(phone);

        phoneValue = new QLineEdit(layoutWidget3);
        phoneValue->setObjectName(QString::fromUtf8("phoneValue"));
        phoneValue->setMinimumSize(QSize(0, 30));

        horizontalLayout_3->addWidget(phoneValue);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        address = new QLabel(layoutWidget3);
        address->setObjectName(QString::fromUtf8("address"));
        address->setMinimumSize(QSize(150, 0));

        horizontalLayout_4->addWidget(address);

        addressValue = new QLineEdit(layoutWidget3);
        addressValue->setObjectName(QString::fromUtf8("addressValue"));
        addressValue->setMinimumSize(QSize(0, 30));

        horizontalLayout_4->addWidget(addressValue);


        verticalLayout->addLayout(horizontalLayout_4);

        editPersonInfo = new QPushButton(page7);
        editPersonInfo->setObjectName(QString::fromUtf8("editPersonInfo"));
        editPersonInfo->setGeometry(QRect(70, 490, 200, 50));
        logout = new QPushButton(page7);
        logout->setObjectName(QString::fromUtf8("logout"));
        logout->setGeometry(QRect(570, 490, 200, 50));
        infoLabel = new QLabel(page7);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));
        infoLabel->setGeometry(QRect(0, 10, 850, 50));
        infoLabel->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
""));
        infoLabel->setAlignment(Qt::AlignCenter);
        stackedWidget->addWidget(page7);
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(5, 5, 135, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(28);
        logo->setFont(font);
        logo->setStyleSheet(QString::fromUtf8("color: rgb(67, 186, 31);"));
        logo->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\273\277\344\271\213\346\272\220", nullptr));

        const bool __sortingEnabled = bar->isSortingEnabled();
        bar->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = bar->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "\351\246\226\351\241\265", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = bar->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "\346\260\264\346\236\234\345\261\225\345\217\260", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = bar->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "\346\224\266\350\227\217\345\244\271", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = bar->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "\350\264\255\347\211\251\350\275\246", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = bar->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = bar->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "\350\201\224\347\263\273\345\256\242\346\234\215", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = bar->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        bar->setSortingEnabled(__sortingEnabled);

        newNotice->setText(QCoreApplication::translate("MainWindow", "\346\234\200\346\226\260\345\205\254\345\221\212", nullptr));
        timeLabel->setText(QString());
        welcome->setText(QString());
        noticeTime->setText(QString());
        searchKey->setText(QString());
        searchKey->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\260\264\346\236\234\347\232\204\345\220\215\347\247\260", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        fruitDisplay->setText(QCoreApplication::translate("MainWindow", "\346\260\264\346\236\234\345\261\225\345\217\260", nullptr));
        sortBox->setItemText(0, QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250\346\260\264\346\236\234", nullptr));
        sortBox->setItemText(1, QCoreApplication::translate("MainWindow", "\347\223\234\346\236\234\347\261\273", nullptr));
        sortBox->setItemText(2, QCoreApplication::translate("MainWindow", "\346\240\270\346\236\234\344\273\201\346\236\234\347\261\273", nullptr));
        sortBox->setItemText(3, QCoreApplication::translate("MainWindow", "\347\203\255\345\270\246\346\260\264\346\236\234", nullptr));
        sortBox->setItemText(4, QCoreApplication::translate("MainWindow", "\346\237\221\346\251\230\347\261\273", nullptr));
        sortBox->setItemText(5, QCoreApplication::translate("MainWindow", "\346\265\206\346\236\234\347\261\273", nullptr));

        sortBtn->setText(QCoreApplication::translate("MainWindow", "\345\210\206\347\261\273\346\237\245\347\234\213", nullptr));
        fruit_picture->setText(QString());
        pgUp->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\351\241\265", nullptr));
        pgDw->setText(QCoreApplication::translate("MainWindow", "\344\270\213\344\270\200\351\241\265", nullptr));
        collect->setText(QCoreApplication::translate("MainWindow", "\346\224\266\350\227\217", nullptr));
        buyNum->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        addToCart->setText(QCoreApplication::translate("MainWindow", "\345\212\240\345\205\245\350\264\255\347\211\251\350\275\246", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217\350\247\204\345\210\231:", nullptr));
        sort1->setText(QCoreApplication::translate("MainWindow", "\351\224\200\351\207\217\342\206\223", nullptr));
        sort2->setText(QCoreApplication::translate("MainWindow", "\344\273\267\346\240\274\342\206\221", nullptr));
        sort3->setText(QCoreApplication::translate("MainWindow", "\344\273\267\346\240\274\342\206\223", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\220\215\347\247\260:", nullptr));
        fruit_name->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "\344\273\267\346\240\274:", nullptr));
        fruit_price->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "\345\210\206\347\261\273:", nullptr));
        fruit_sort->setText(QString());
        label_14->setText(QCoreApplication::translate("MainWindow", "\344\272\247\345\234\260:", nullptr));
        fruit_origin->setText(QString());
        label_16->setText(QCoreApplication::translate("MainWindow", "\351\224\200\351\207\217:", nullptr));
        fruit_sale->setText(QString());
        label_18->setText(QCoreApplication::translate("MainWindow", "\345\272\223\345\255\230:", nullptr));
        fruit_stock->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = favoritesTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = favoritesTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\346\260\264\346\236\234\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = favoritesTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\215\225\344\273\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = favoritesTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\272\223\345\255\230", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = favoritesTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\346\211\271\351\207\217\345\210\240\351\231\244", nullptr));
        refreshFavorites->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        deleteFavorites->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        favoritesLabel->setText(QCoreApplication::translate("MainWindow", "\346\224\266\350\227\217\345\244\271", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = cartTable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = cartTable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\346\260\264\346\236\234\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = cartTable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\350\264\255\344\271\260\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = cartTable->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "\351\207\221\351\242\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = cartTable->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "\346\211\271\351\207\217\345\210\240\351\231\244", nullptr));
        deleteCart->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        submitCart->setText(QCoreApplication::translate("MainWindow", "\347\273\223\347\256\227", nullptr));
        money->setText(QString());
        cartLabel->setText(QCoreApplication::translate("MainWindow", "\350\264\255\347\211\251\350\275\246", nullptr));
        receipt->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244\346\224\266\350\264\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = orderTable->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = orderTable->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\215\225\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = orderTable->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "\346\260\264\346\236\234\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = orderTable->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "\350\264\255\344\271\260\346\225\260\351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = orderTable->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "\346\200\273\351\207\221\351\242\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = orderTable->horizontalHeaderItem(5);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = orderTable->horizontalHeaderItem(6);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "\346\211\271\351\207\217\346\223\215\344\275\234", nullptr));
        searchOrder->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        orderStatus->setItemText(0, QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250\350\256\242\345\215\225", nullptr));
        orderStatus->setItemText(1, QCoreApplication::translate("MainWindow", "\346\210\220\345\212\237\350\256\242\345\215\225", nullptr));
        orderStatus->setItemText(2, QCoreApplication::translate("MainWindow", "\345\244\261\350\264\245\350\256\242\345\215\225", nullptr));
        orderStatus->setItemText(3, QCoreApplication::translate("MainWindow", "\345\267\262\351\205\215\351\200\201\350\256\242\345\215\225", nullptr));
        orderStatus->setItemText(4, QCoreApplication::translate("MainWindow", "\346\234\252\351\205\215\351\200\201\350\256\242\345\215\225", nullptr));

        cancel->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210\350\256\242\345\215\225", nullptr));
        orderLabel->setText(QCoreApplication::translate("MainWindow", "\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));
        messageLabel->setText(QCoreApplication::translate("MainWindow", "\345\256\242\346\234\215\344\270\255\345\277\203", nullptr));
        chatSend->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        loadChat->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        savePersonInfo->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        username->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        password->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        password_2->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244\345\257\206\347\240\201\357\274\232", nullptr));
        phone->setText(QCoreApplication::translate("MainWindow", "\347\224\265\350\257\235\357\274\232", nullptr));
        address->setText(QCoreApplication::translate("MainWindow", "\346\224\266\350\264\247\345\234\260\345\235\200\357\274\232", nullptr));
        editPersonInfo->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        logout->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        infoLabel->setText(QCoreApplication::translate("MainWindow", "\344\270\252\344\272\272\344\270\255\345\277\203", nullptr));
        logo->setText(QCoreApplication::translate("MainWindow", "\347\273\277\344\271\213\346\272\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
