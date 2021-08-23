/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action1;
    QAction *action2;
    QAction *action3;
    QAction *actionExit;
    QWidget *centralwidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QWidget *page_2;
    QGroupBox *groupBox;
    QPushButton *pushButton_14;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *lineEdit_nom;
    QLabel *label_2;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_tel;
    QLineEdit *lineEdit_email;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *spinBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_7;
    QPushButton *pushButton_16;
    QLineEdit *lineEdit_ide;
    QLabel *label_8;
    QWidget *tab_2;
    QStackedWidget *stackedWidget_2;
    QWidget *page_6;
    QPushButton *pushButton_17;
    QRadioButton *radioButton_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QTableView *tableView;
    QPushButton *pushButton_18;
    QPushButton *pushButton_20;
    QLabel *label_11;
    QLabel *label_10;
    QPushButton *pushButton_19;
    QPushButton *pushButton_21;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QRadioButton *radioButton_4;
    QWidget *page_7;
    QWidget *page_3;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_15;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLineEdit *lineEdit_dateev;
    QLineEdit *lineEdit_rev;
    QLineEdit *lineEdit_cap;
    QLineEdit *lineEdit_lieu;
    QLineEdit *lineEdit_orga;
    QLineEdit *lineEdit_prix;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QPushButton *pushButton_22;
    QLabel *label_32;
    QDateTimeEdit *dateTimeEdit;
    QWidget *tab_4;
    QStackedWidget *stackedWidget_4;
    QWidget *page_4;
    QLabel *label_29;
    QPushButton *pushButton_30;
    QRadioButton *radioButton_10;
    QPushButton *pushButton_31;
    QLabel *label_30;
    QPushButton *pushButton_33;
    QTableView *tableView_1;
    QComboBox *comboBox_3;
    QPushButton *pushButton_29;
    QPushButton *pushButton_32;
    QRadioButton *radioButton_9;
    QLineEdit *lineEdit_5;
    QLabel *label_31;
    QLineEdit *lineEdit_6;
    QWidget *page_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelpe;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1217, 690);
        MainWindow->setMaximumSize(QSize(1217, 831));
        action1 = new QAction(MainWindow);
        action1->setObjectName(QStringLiteral("action1"));
        action2 = new QAction(MainWindow);
        action2->setObjectName(QStringLiteral("action2"));
        action3 = new QAction(MainWindow);
        action3->setObjectName(QStringLiteral("action3"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 0, 111, 101));
        pushButton_2->setStyleSheet(QLatin1String("border-image: url(:/dossier.png);\n"
""));
        pushButton_2->setAutoDefault(true);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 0, 111, 101));
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/download-icon.png);"));
        pushButton_3->setAutoDefault(true);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(330, 0, 111, 101));
        pushButton_4->setStyleSheet(QStringLiteral("border-image: url(:/view-refresh-4.png);"));
        pushButton_4->setAutoDefault(true);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 100, 1181, 521));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton_12 = new QPushButton(page);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(40, 0, 511, 491));
        pushButton_12->setStyleSheet(QStringLiteral("border-image: url(:/img/VISITEURBUUT.png);"));
        pushButton_13 = new QPushButton(page);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(600, 0, 511, 491));
        pushButton_13->setStyleSheet(QStringLiteral("border-image: url(:/img/bUTT evenement.png);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 1171, 521));
        pushButton_14 = new QPushButton(groupBox);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(1070, 390, 91, 81));
        pushButton_14->setStyleSheet(QStringLiteral("border-image: url(:/img/HOMEBUUT.png);"));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 20, 1071, 471));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        lineEdit_nom = new QLineEdit(tab);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(180, 30, 291, 41));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 100, 141, 16));
        lineEdit_prenom = new QLineEdit(tab);
        lineEdit_prenom->setObjectName(QStringLiteral("lineEdit_prenom"));
        lineEdit_prenom->setGeometry(QRect(180, 90, 291, 41));
        lineEdit_tel = new QLineEdit(tab);
        lineEdit_tel->setObjectName(QStringLiteral("lineEdit_tel"));
        lineEdit_tel->setGeometry(QRect(180, 210, 291, 41));
        lineEdit_email = new QLineEdit(tab);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(180, 150, 291, 41));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 101, 16));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 160, 101, 21));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 220, 101, 16));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 270, 101, 31));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(470, 20, 47, 14));
        spinBox = new QSpinBox(tab);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(180, 270, 291, 41));
        radioButton = new QRadioButton(tab);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(180, 370, 141, 41));
        radioButton_2 = new QRadioButton(tab);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(320, 370, 141, 41));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 380, 71, 21));
        pushButton_16 = new QPushButton(tab);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(590, 50, 151, 31));
        lineEdit_ide = new QLineEdit(tab);
        lineEdit_ide->setObjectName(QStringLiteral("lineEdit_ide"));
        lineEdit_ide->setGeometry(QRect(180, 330, 291, 41));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 340, 101, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        stackedWidget_2 = new QStackedWidget(tab_2);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(-1, 20, 1071, 431));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        pushButton_17 = new QPushButton(page_6);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(880, 20, 91, 21));
        radioButton_3 = new QRadioButton(page_6);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(660, 21, 83, 18));
        lineEdit = new QLineEdit(page_6);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 21, 151, 21));
        comboBox = new QComboBox(page_6);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(420, 21, 180, 22));
        tableView = new QTableView(page_6);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(60, 61, 921, 251));
        pushButton_18 = new QPushButton(page_6);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(360, 371, 91, 31));
        pushButton_20 = new QPushButton(page_6);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(860, 371, 91, 31));
        label_11 = new QLabel(page_6);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 371, 110, 31));
        label_10 = new QLabel(page_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(370, 21, 47, 20));
        pushButton_19 = new QPushButton(page_6);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(470, 371, 101, 31));
        pushButton_21 = new QPushButton(page_6);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(970, 371, 91, 31));
        label_9 = new QLabel(page_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 21, 71, 21));
        lineEdit_2 = new QLineEdit(page_6);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(120, 370, 221, 31));
        radioButton_4 = new QRadioButton(page_6);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(760, 20, 83, 18));
        stackedWidget_2->addWidget(page_6);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        stackedWidget_2->addWidget(page_7);
        tabWidget->addTab(tab_2, QString());
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        groupBox_2 = new QGroupBox(page_3);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 10, 1181, 471));
        pushButton_15 = new QPushButton(groupBox_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(1090, 390, 91, 81));
        pushButton_15->setStyleSheet(QStringLiteral("border-image: url(:/img/HOMEBUUT.png);"));
        tabWidget_2 = new QTabWidget(groupBox_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 20, 1081, 451));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        lineEdit_dateev = new QLineEdit(tab_3);
        lineEdit_dateev->setObjectName(QStringLiteral("lineEdit_dateev"));
        lineEdit_dateev->setGeometry(QRect(200, 60, 291, 41));
        lineEdit_rev = new QLineEdit(tab_3);
        lineEdit_rev->setObjectName(QStringLiteral("lineEdit_rev"));
        lineEdit_rev->setGeometry(QRect(200, 240, 291, 41));
        lineEdit_cap = new QLineEdit(tab_3);
        lineEdit_cap->setObjectName(QStringLiteral("lineEdit_cap"));
        lineEdit_cap->setGeometry(QRect(200, 300, 291, 41));
        lineEdit_lieu = new QLineEdit(tab_3);
        lineEdit_lieu->setObjectName(QStringLiteral("lineEdit_lieu"));
        lineEdit_lieu->setGeometry(QRect(200, 360, 291, 41));
        lineEdit_orga = new QLineEdit(tab_3);
        lineEdit_orga->setObjectName(QStringLiteral("lineEdit_orga"));
        lineEdit_orga->setGeometry(QRect(200, 180, 291, 41));
        lineEdit_prix = new QLineEdit(tab_3);
        lineEdit_prix->setObjectName(QStringLiteral("lineEdit_prix"));
        lineEdit_prix->setGeometry(QRect(200, 120, 231, 41));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(80, 70, 121, 21));
        label_13 = new QLabel(tab_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(80, 130, 47, 14));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(80, 180, 81, 31));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(80, 310, 47, 14));
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(80, 370, 47, 14));
        label_17 = new QLabel(tab_3);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(80, 243, 151, 31));
        pushButton_22 = new QPushButton(tab_3);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(580, 82, 121, 41));
        label_32 = new QLabel(tab_3);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(450, 130, 47, 20));
        dateTimeEdit = new QDateTimeEdit(tab_3);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(220, 20, 194, 22));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        stackedWidget_4 = new QStackedWidget(tab_4);
        stackedWidget_4->setObjectName(QStringLiteral("stackedWidget_4"));
        stackedWidget_4->setGeometry(QRect(0, 0, 1071, 421));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_29 = new QLabel(page_4);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(100, 20, 71, 21));
        pushButton_30 = new QPushButton(page_4);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));
        pushButton_30->setGeometry(QRect(450, 370, 101, 31));
        radioButton_10 = new QRadioButton(page_4);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setGeometry(QRect(740, 19, 83, 18));
        pushButton_31 = new QPushButton(page_4);
        pushButton_31->setObjectName(QStringLiteral("pushButton_31"));
        pushButton_31->setGeometry(QRect(860, 19, 91, 21));
        label_30 = new QLabel(page_4);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 370, 110, 31));
        pushButton_33 = new QPushButton(page_4);
        pushButton_33->setObjectName(QStringLiteral("pushButton_33"));
        pushButton_33->setGeometry(QRect(840, 370, 91, 31));
        tableView_1 = new QTableView(page_4);
        tableView_1->setObjectName(QStringLiteral("tableView_1"));
        tableView_1->setGeometry(QRect(40, 60, 921, 251));
        comboBox_3 = new QComboBox(page_4);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(400, 20, 180, 22));
        pushButton_29 = new QPushButton(page_4);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));
        pushButton_29->setGeometry(QRect(950, 370, 91, 31));
        pushButton_32 = new QPushButton(page_4);
        pushButton_32->setObjectName(QStringLiteral("pushButton_32"));
        pushButton_32->setGeometry(QRect(340, 370, 91, 31));
        radioButton_9 = new QRadioButton(page_4);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(640, 20, 83, 18));
        lineEdit_5 = new QLineEdit(page_4);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(100, 369, 221, 31));
        label_31 = new QLabel(page_4);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(350, 20, 47, 20));
        lineEdit_6 = new QLineEdit(page_4);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(170, 20, 151, 21));
        stackedWidget_4->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        stackedWidget_4->addWidget(page_5);
        tabWidget_2->addTab(tab_4, QString());
        stackedWidget->addWidget(page_3);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(550, 0, 111, 101));
        pushButton_6->setStyleSheet(QLatin1String("border-image: url(:/dossier.png);\n"
""));
        pushButton_6->setAutoDefault(true);
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(440, 0, 111, 101));
        pushButton_5->setStyleSheet(QLatin1String("border-image: url(:/dossier.png);\n"
""));
        pushButton_5->setAutoDefault(true);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 0, 111, 101));
        pushButton_8->setStyleSheet(QLatin1String("border-image: url(:/dossier.png);\n"
""));
        pushButton_8->setAutoDefault(true);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(660, 0, 111, 101));
        pushButton_7->setStyleSheet(QLatin1String("border-image: url(:/dossier.png);\n"
""));
        pushButton_7->setAutoDefault(true);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(770, 0, 111, 101));
        pushButton->setStyleSheet(QLatin1String("\n"
"border-image: url(:/home-icon.png);"));
        pushButton->setAutoDefault(true);
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(880, 0, 111, 101));
        pushButton_9->setStyleSheet(QLatin1String("border-image: url(:/dossier.png);\n"
""));
        pushButton_9->setAutoDefault(true);
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(990, 0, 111, 101));
        pushButton_10->setStyleSheet(QLatin1String("border-image: url(:/dossier.png);\n"
""));
        pushButton_10->setAutoDefault(true);
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(1100, 0, 121, 101));
        pushButton_11->setStyleSheet(QLatin1String("\n"
"border-image: url(:/img/HOMEBUUT.png);\n"
""));
        pushButton_11->setAutoDefault(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1217, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelpe = new QMenu(menubar);
        menuHelpe->setObjectName(QStringLiteral("menuHelpe"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelpe->menuAction());
        menuFile->addAction(action1);
        menuFile->addSeparator();
        menuFile->addAction(action2);
        menuFile->addSeparator();
        menuFile->addAction(action3);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        action2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        action3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Gestion Visiteur", Q_NULLPTR));
        pushButton_14->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Pr\303\251nom :", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Email :", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "T\303\251l :", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Age :", Q_NULLPTR));
        label_6->setText(QString());
        radioButton->setText(QApplication::translate("MainWindow", "HOMME", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "FEMME", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Sexe :", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MainWindow", "Ajouter ", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "ID evenement :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Ajouter Visiteur", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "Croissant", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NOM", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DATEVISITEUR", Q_NULLPTR)
        );
        pushButton_18->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_20->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Modifier (.......) :", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Trier :", Q_NULLPTR));
        pushButton_19->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_21->setText(QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Recherche :", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "D\303\251croissant", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Consulter Visiteurs", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Gestion Ev\303\250nement", Q_NULLPTR));
        pushButton_15->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Date de l'evenment:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Prix :", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Organisateur :", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Capacit\303\251 :", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Lieu :", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Relev\303\251 Approximative :", Q_NULLPTR));
        pushButton_22->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "dt", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "Ajouter Evenement", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "Recherche :", Q_NULLPTR));
        pushButton_30->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        radioButton_10->setText(QApplication::translate("MainWindow", "D\303\251croissant", Q_NULLPTR));
        pushButton_31->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "Modifier (.......) :", Q_NULLPTR));
        pushButton_33->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "ID", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NOM", Q_NULLPTR)
         << QApplication::translate("MainWindow", "DATEVISITEUR", Q_NULLPTR)
        );
        pushButton_29->setText(QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        pushButton_32->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        radioButton_9->setText(QApplication::translate("MainWindow", "Croissant", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "Trier :", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Consulter Evenemet", Q_NULLPTR));
        pushButton_6->setText(QString());
        pushButton_5->setText(QString());
        pushButton_8->setText(QString());
        pushButton_7->setText(QString());
        pushButton->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuHelpe->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
