/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget_10;
    QWidget *widget;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer;
    QLabel *lblGanMao;
    QWidget *widget_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *lblWindIcon;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblWindFx;
    QLabel *lblWindFl;
    QHBoxLayout *horizontalLayout_15;
    QLabel *lblPm25Icon;
    QVBoxLayout *verticalLayout_8;
    QLabel *lblWindFx_4;
    QLabel *lblPm25;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblShiduIcon;
    QVBoxLayout *verticalLayout_9;
    QLabel *lblWindFx_5;
    QLabel *lblShidu;
    QHBoxLayout *horizontalLayout_8;
    QLabel *lblAqiIcon;
    QVBoxLayout *verticalLayout_10;
    QLabel *lblWindFx_6;
    QLabel *lblQuality;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QLabel *lblWeek0;
    QLabel *lblWeek1;
    QLabel *lblWeek2;
    QLabel *lblWeek3;
    QLabel *lblWeek4;
    QLabel *lblWeek5;
    QLabel *lblDate0;
    QLabel *lblDate1;
    QLabel *lblDate2;
    QLabel *lblDate3;
    QLabel *lblDate4;
    QLabel *lblDate5;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QLabel *lblTypeIcon0;
    QLabel *lblTypeIcon2;
    QLabel *lblTypeIcon5;
    QLabel *lblType5;
    QLabel *lblTypeIcon1;
    QLabel *lblType0;
    QLabel *lblType1;
    QLabel *lblType2;
    QLabel *lblType3;
    QLabel *lblTypeIcon3;
    QLabel *lblTypeIcon4;
    QLabel *lblType4;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblQuality0;
    QLabel *lblQuality1;
    QLabel *lblQuality2;
    QLabel *lblQuality3;
    QLabel *lblQuality4;
    QLabel *lblQuality5;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *lblHighCurve;
    QLabel *lblLowCurve;
    QWidget *widget_8;
    QGridLayout *gridLayout;
    QLabel *lblFl5;
    QLabel *lblFl1;
    QLabel *lblFx2;
    QLabel *lblFl3;
    QLabel *lblFl0;
    QLabel *lblFx3;
    QLabel *lblFx5;
    QLabel *lblFl2;
    QLabel *lblFx0;
    QLabel *lblFl4;
    QLabel *lblFx4;
    QLabel *lblFx1;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lblTypeIcon;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblTemp;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblCity;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblType;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lblLowHigh;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leCity;
    QPushButton *btnSearch;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblDate;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 450);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        widget_10 = new QWidget(centralwidget);
        widget_10->setObjectName("widget_10");
        widget_10->setGeometry(QRect(0, 0, 800, 500));
        widget_10->setStyleSheet(QString::fromUtf8("QWidget#widget_10{\n"
"	background-image: url(:/res/background.png);\n"
"}\n"
"\n"
"QLabel {\n"
"	font: 25 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius: 4px;\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        widget = new QWidget(widget_10);
        widget->setObjectName("widget");
        widget->setEnabled(true);
        widget->setGeometry(QRect(20, 200, 361, 251));
        QFont font;
        font.setBold(false);
        widget->setFont(font);
        verticalLayout_11 = new QVBoxLayout(widget);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);

        lblGanMao = new QLabel(widget);
        lblGanMao->setObjectName("lblGanMao");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        lblGanMao->setFont(font1);
        lblGanMao->setStyleSheet(QString::fromUtf8("background-color: rgba(60, 60, 60, 0);\n"
"font: 9pt \"Microsoft YaHei UI\";\n"
"padding-left: 5px;\n"
"padding-right: 5px;"));
        lblGanMao->setWordWrap(true);

        verticalLayout_11->addWidget(lblGanMao);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 133, 255);\n"
"border-radius: 15px"));
        gridLayout_4 = new QGridLayout(widget_2);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(20);
        gridLayout_4->setVerticalSpacing(5);
        gridLayout_4->setContentsMargins(30, 20, 30, 20);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        lblWindIcon = new QLabel(widget_2);
        lblWindIcon->setObjectName("lblWindIcon");
        lblWindIcon->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblWindIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/wind.png")));
        lblWindIcon->setScaledContents(true);

        horizontalLayout_12->addWidget(lblWindIcon);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        lblWindFx = new QLabel(widget_2);
        lblWindFx->setObjectName("lblWindFx");
        lblWindFx->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblWindFx->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lblWindFx);

        lblWindFl = new QLabel(widget_2);
        lblWindFl->setObjectName("lblWindFl");
        lblWindFl->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblWindFl->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lblWindFl);


        horizontalLayout_12->addLayout(verticalLayout_4);


        gridLayout_4->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        lblPm25Icon = new QLabel(widget_2);
        lblPm25Icon->setObjectName("lblPm25Icon");
        lblPm25Icon->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblPm25Icon->setPixmap(QPixmap(QString::fromUtf8(":/res/pm25.png")));
        lblPm25Icon->setScaledContents(true);

        horizontalLayout_15->addWidget(lblPm25Icon);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        lblWindFx_4 = new QLabel(widget_2);
        lblWindFx_4->setObjectName("lblWindFx_4");
        lblWindFx_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblWindFx_4->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(lblWindFx_4);

        lblPm25 = new QLabel(widget_2);
        lblPm25->setObjectName("lblPm25");
        lblPm25->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblPm25->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(lblPm25);


        horizontalLayout_15->addLayout(verticalLayout_8);


        gridLayout_4->addLayout(horizontalLayout_15, 0, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lblShiduIcon = new QLabel(widget_2);
        lblShiduIcon->setObjectName("lblShiduIcon");
        lblShiduIcon->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblShiduIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/humidity.png")));
        lblShiduIcon->setScaledContents(true);

        horizontalLayout_7->addWidget(lblShiduIcon);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        lblWindFx_5 = new QLabel(widget_2);
        lblWindFx_5->setObjectName("lblWindFx_5");
        lblWindFx_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblWindFx_5->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(lblWindFx_5);

        lblShidu = new QLabel(widget_2);
        lblShidu->setObjectName("lblShidu");
        lblShidu->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblShidu->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(lblShidu);


        horizontalLayout_7->addLayout(verticalLayout_9);


        gridLayout_4->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, -1, 0, -1);
        lblAqiIcon = new QLabel(widget_2);
        lblAqiIcon->setObjectName("lblAqiIcon");
        lblAqiIcon->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblAqiIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/aqi.png")));
        lblAqiIcon->setScaledContents(true);

        horizontalLayout_8->addWidget(lblAqiIcon);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, -1, 0, -1);
        lblWindFx_6 = new QLabel(widget_2);
        lblWindFx_6->setObjectName("lblWindFx_6");
        lblWindFx_6->setMinimumSize(QSize(60, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        lblWindFx_6->setFont(font2);
        lblWindFx_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblWindFx_6->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(lblWindFx_6);

        lblQuality = new QLabel(widget_2);
        lblQuality->setObjectName("lblQuality");
        lblQuality->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblQuality->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(lblQuality);


        horizontalLayout_8->addLayout(verticalLayout_10);


        gridLayout_4->addLayout(horizontalLayout_8, 1, 1, 1, 1);


        verticalLayout_11->addWidget(widget_2);

        widget_11 = new QWidget(widget_10);
        widget_11->setObjectName("widget_11");
        widget_11->setEnabled(true);
        widget_11->setGeometry(QRect(379, 15, 429, 463));
        widget_11->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(widget_11);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        widget_5 = new QWidget(widget_11);
        widget_5->setObjectName("widget_5");
        widget_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(0, 200, 200, 200);\n"
"	border-radius: 4px;\n"
"	font: 9pt \"Microsoft YaHei UI\";\n"
"}"));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(11, 30, 11, 3);
        lblWeek0 = new QLabel(widget_5);
        lblWeek0->setObjectName("lblWeek0");
        lblWeek0->setFont(font1);
        lblWeek0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek0->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek0, 0, 0, 1, 1);

        lblWeek1 = new QLabel(widget_5);
        lblWeek1->setObjectName("lblWeek1");
        lblWeek1->setFont(font1);
        lblWeek1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek1, 0, 1, 1, 1);

        lblWeek2 = new QLabel(widget_5);
        lblWeek2->setObjectName("lblWeek2");
        lblWeek2->setFont(font1);
        lblWeek2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek2, 0, 2, 1, 1);

        lblWeek3 = new QLabel(widget_5);
        lblWeek3->setObjectName("lblWeek3");
        lblWeek3->setFont(font1);
        lblWeek3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek3, 0, 3, 1, 1);

        lblWeek4 = new QLabel(widget_5);
        lblWeek4->setObjectName("lblWeek4");
        lblWeek4->setFont(font1);
        lblWeek4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek4, 0, 4, 1, 1);

        lblWeek5 = new QLabel(widget_5);
        lblWeek5->setObjectName("lblWeek5");
        lblWeek5->setFont(font1);
        lblWeek5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek5, 0, 5, 1, 1);

        lblDate0 = new QLabel(widget_5);
        lblDate0->setObjectName("lblDate0");
        lblDate0->setFont(font1);
        lblDate0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate0->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate0, 1, 0, 1, 1);

        lblDate1 = new QLabel(widget_5);
        lblDate1->setObjectName("lblDate1");
        lblDate1->setFont(font1);
        lblDate1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate1, 1, 1, 1, 1);

        lblDate2 = new QLabel(widget_5);
        lblDate2->setObjectName("lblDate2");
        lblDate2->setFont(font1);
        lblDate2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate2, 1, 2, 1, 1);

        lblDate3 = new QLabel(widget_5);
        lblDate3->setObjectName("lblDate3");
        lblDate3->setFont(font1);
        lblDate3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate3, 1, 3, 1, 1);

        lblDate4 = new QLabel(widget_5);
        lblDate4->setObjectName("lblDate4");
        lblDate4->setFont(font1);
        lblDate4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate4, 1, 4, 1, 1);

        lblDate5 = new QLabel(widget_5);
        lblDate5->setObjectName("lblDate5");
        lblDate5->setFont(font1);
        lblDate5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate5, 1, 5, 1, 1);


        verticalLayout_3->addWidget(widget_5);

        widget_6 = new QWidget(widget_11);
        widget_6->setObjectName("widget_6");
        widget_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	border-radius: 4px;\n"
"	font: 10pt \"Microsoft YaHei UI\";\n"
"}"));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(11, 5, 11, 5);
        lblTypeIcon0 = new QLabel(widget_6);
        lblTypeIcon0->setObjectName("lblTypeIcon0");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        lblTypeIcon0->setFont(font3);
        lblTypeIcon0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon0->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        lblTypeIcon0->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTypeIcon0, 0, 0, 1, 1);

        lblTypeIcon2 = new QLabel(widget_6);
        lblTypeIcon2->setObjectName("lblTypeIcon2");
        lblTypeIcon2->setFont(font3);
        lblTypeIcon2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTypeIcon2, 0, 3, 1, 1);

        lblTypeIcon5 = new QLabel(widget_6);
        lblTypeIcon5->setObjectName("lblTypeIcon5");
        lblTypeIcon5->setFont(font3);
        lblTypeIcon5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon5->setPixmap(QPixmap(QString::fromUtf8(":/res/type/BaoYu.png")));
        lblTypeIcon5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTypeIcon5, 0, 8, 1, 1);

        lblType5 = new QLabel(widget_6);
        lblType5->setObjectName("lblType5");
        lblType5->setFont(font3);
        lblType5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType5, 1, 8, 1, 1);

        lblTypeIcon1 = new QLabel(widget_6);
        lblTypeIcon1->setObjectName("lblTypeIcon1");
        lblTypeIcon1->setFont(font3);
        lblTypeIcon1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon1->setPixmap(QPixmap(QString::fromUtf8(":/res/type/XiaoYu.png")));
        lblTypeIcon1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTypeIcon1, 0, 1, 1, 1);

        lblType0 = new QLabel(widget_6);
        lblType0->setObjectName("lblType0");
        lblType0->setFont(font3);
        lblType0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType0->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType0, 1, 0, 1, 1);

        lblType1 = new QLabel(widget_6);
        lblType1->setObjectName("lblType1");
        lblType1->setFont(font3);
        lblType1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType1, 1, 1, 1, 1);

        lblType2 = new QLabel(widget_6);
        lblType2->setObjectName("lblType2");
        lblType2->setFont(font3);
        lblType2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType2, 1, 3, 1, 1);

        lblType3 = new QLabel(widget_6);
        lblType3->setObjectName("lblType3");
        lblType3->setFont(font3);
        lblType3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType3, 1, 4, 1, 1);

        lblTypeIcon3 = new QLabel(widget_6);
        lblTypeIcon3->setObjectName("lblTypeIcon3");
        lblTypeIcon3->setFont(font3);
        lblTypeIcon3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon3->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTypeIcon3, 0, 4, 1, 1);

        lblTypeIcon4 = new QLabel(widget_6);
        lblTypeIcon4->setObjectName("lblTypeIcon4");
        lblTypeIcon4->setFont(font3);
        lblTypeIcon4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/ZhongYu.png")));
        lblTypeIcon4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTypeIcon4, 0, 6, 1, 1);

        lblType4 = new QLabel(widget_6);
        lblType4->setObjectName("lblType4");
        lblType4->setFont(font3);
        lblType4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType4, 1, 6, 1, 1);


        verticalLayout_3->addWidget(widget_6);

        widget_7 = new QWidget(widget_11);
        widget_7->setObjectName("widget_7");
        widget_7->setStyleSheet(QString::fromUtf8("font: 9pt \"Microsoft YaHei UI\";"));
        verticalLayout_6 = new QVBoxLayout(widget_7);
        verticalLayout_6->setSpacing(11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(-1, 10, -1, 11);
        widget1 = new QWidget(widget_7);
        widget1->setObjectName("widget1");
        widget1->setMinimumSize(QSize(380, 37));
        widget1->setMaximumSize(QSize(380, 37));
        horizontalLayout_5 = new QHBoxLayout(widget1);
        horizontalLayout_5->setSpacing(7);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(-1, 0, -1, 20);
        lblQuality0 = new QLabel(widget1);
        lblQuality0->setObjectName("lblQuality0");
        lblQuality0->setMinimumSize(QSize(55, 35));
        lblQuality0->setMaximumSize(QSize(55, 35));
        lblQuality0->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 184, 0);\n"
"padding:8px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;"));
        lblQuality0->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblQuality0);

        lblQuality1 = new QLabel(widget1);
        lblQuality1->setObjectName("lblQuality1");
        lblQuality1->setMinimumSize(QSize(55, 35));
        lblQuality1->setMaximumSize(QSize(55, 35));
        lblQuality1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 187, 23);\n"
"padding:8px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;"));
        lblQuality1->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblQuality1);

        lblQuality2 = new QLabel(widget1);
        lblQuality2->setObjectName("lblQuality2");
        lblQuality2->setMinimumSize(QSize(55, 35));
        lblQuality2->setMaximumSize(QSize(55, 35));
        lblQuality2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 82, 148);\n"
"padding:8px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;"));
        lblQuality2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblQuality2);

        lblQuality3 = new QLabel(widget1);
        lblQuality3->setObjectName("lblQuality3");
        lblQuality3->setMinimumSize(QSize(55, 35));
        lblQuality3->setMaximumSize(QSize(55, 35));
        lblQuality3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"padding:8px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;"));
        lblQuality3->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblQuality3);

        lblQuality4 = new QLabel(widget1);
        lblQuality4->setObjectName("lblQuality4");
        lblQuality4->setMinimumSize(QSize(55, 35));
        lblQuality4->setMaximumSize(QSize(55, 35));
        lblQuality4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);\n"
"padding:8px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;"));
        lblQuality4->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblQuality4);

        lblQuality5 = new QLabel(widget1);
        lblQuality5->setObjectName("lblQuality5");
        lblQuality5->setMinimumSize(QSize(55, 35));
        lblQuality5->setMaximumSize(QSize(55, 35));
        lblQuality5->setStyleSheet(QString::fromUtf8("background-color: rgb(102, 0, 0);\n"
"padding:8px;\n"
"border-bottom-left-radius: 10px;\n"
"border-bottom-right-radius: 10px;\n"
"border-top-left-radius: 10px;\n"
"border-top-right-radius: 10px;"));
        lblQuality5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(lblQuality5);


        verticalLayout_6->addWidget(widget1);

        widget2 = new QWidget(widget_7);
        widget2->setObjectName("widget2");
        verticalLayout_5 = new QVBoxLayout(widget2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(11, 11, -1, 11);
        lblHighCurve = new QLabel(widget2);
        lblHighCurve->setObjectName("lblHighCurve");
        lblHighCurve->setMinimumSize(QSize(0, 80));
        lblHighCurve->setFont(font1);
        lblHighCurve->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));

        verticalLayout_5->addWidget(lblHighCurve);

        lblLowCurve = new QLabel(widget2);
        lblLowCurve->setObjectName("lblLowCurve");
        lblLowCurve->setMinimumSize(QSize(0, 80));
        lblLowCurve->setFont(font1);
        lblLowCurve->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));

        verticalLayout_5->addWidget(lblLowCurve);

        widget_8 = new QWidget(widget2);
        widget_8->setObjectName("widget_8");
        gridLayout = new QGridLayout(widget_8);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 15);
        lblFl5 = new QLabel(widget_8);
        lblFl5->setObjectName("lblFl5");
        lblFl5->setMinimumSize(QSize(51, 19));
        lblFl5->setMaximumSize(QSize(51, 19));
        lblFl5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(78, 255, 211);"));
        lblFl5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFl5, 1, 7, 1, 1);

        lblFl1 = new QLabel(widget_8);
        lblFl1->setObjectName("lblFl1");
        lblFl1->setMinimumSize(QSize(51, 19));
        lblFl1->setMaximumSize(QSize(51, 19));
        lblFl1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(78, 255, 211);"));
        lblFl1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFl1, 1, 1, 1, 1);

        lblFx2 = new QLabel(widget_8);
        lblFx2->setObjectName("lblFx2");
        lblFx2->setMinimumSize(QSize(51, 19));
        lblFx2->setMaximumSize(QSize(51, 19));
        lblFx2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFx2, 0, 3, 1, 1);

        lblFl3 = new QLabel(widget_8);
        lblFl3->setObjectName("lblFl3");
        lblFl3->setMinimumSize(QSize(51, 19));
        lblFl3->setMaximumSize(QSize(51, 19));
        lblFl3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(78, 255, 211);"));
        lblFl3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFl3, 1, 5, 1, 1);

        lblFl0 = new QLabel(widget_8);
        lblFl0->setObjectName("lblFl0");
        lblFl0->setMinimumSize(QSize(51, 19));
        lblFl0->setMaximumSize(QSize(51, 19));
        lblFl0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(78, 255, 211);"));
        lblFl0->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFl0, 1, 0, 1, 1);

        lblFx3 = new QLabel(widget_8);
        lblFx3->setObjectName("lblFx3");
        lblFx3->setMinimumSize(QSize(51, 19));
        lblFx3->setMaximumSize(QSize(51, 19));
        lblFx3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFx3, 0, 5, 1, 1);

        lblFx5 = new QLabel(widget_8);
        lblFx5->setObjectName("lblFx5");
        lblFx5->setMinimumSize(QSize(51, 19));
        lblFx5->setMaximumSize(QSize(51, 19));
        lblFx5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFx5, 0, 7, 1, 1);

        lblFl2 = new QLabel(widget_8);
        lblFl2->setObjectName("lblFl2");
        lblFl2->setMinimumSize(QSize(51, 19));
        lblFl2->setMaximumSize(QSize(51, 19));
        lblFl2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(78, 255, 211);"));
        lblFl2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFl2, 1, 3, 1, 1);

        lblFx0 = new QLabel(widget_8);
        lblFx0->setObjectName("lblFx0");
        lblFx0->setMinimumSize(QSize(51, 19));
        lblFx0->setMaximumSize(QSize(51, 19));
        lblFx0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx0->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFx0, 0, 0, 1, 1);

        lblFl4 = new QLabel(widget_8);
        lblFl4->setObjectName("lblFl4");
        lblFl4->setMinimumSize(QSize(51, 19));
        lblFl4->setMaximumSize(QSize(51, 19));
        lblFl4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(78, 255, 211);"));
        lblFl4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFl4, 1, 6, 1, 1);

        lblFx4 = new QLabel(widget_8);
        lblFx4->setObjectName("lblFx4");
        lblFx4->setMinimumSize(QSize(51, 19));
        lblFx4->setMaximumSize(QSize(51, 19));
        lblFx4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFx4, 0, 6, 1, 1);

        lblFx1 = new QLabel(widget_8);
        lblFx1->setObjectName("lblFx1");
        lblFx1->setMinimumSize(QSize(51, 19));
        lblFx1->setMaximumSize(QSize(51, 19));
        lblFx1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lblFx1, 0, 1, 1, 1);


        verticalLayout_5->addWidget(widget_8);


        verticalLayout_6->addWidget(widget2);


        verticalLayout_3->addWidget(widget_7);

        widget_3 = new QWidget(widget_10);
        widget_3->setObjectName("widget_3");
        widget_3->setEnabled(true);
        widget_3->setGeometry(QRect(20, 60, 361, 147));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgba(157, 133, 255, 0);\n"
"border-radius: 15px"));
        horizontalLayout_4 = new QHBoxLayout(widget_3);
        horizontalLayout_4->setSpacing(8);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        lblTypeIcon = new QLabel(widget_3);
        lblTypeIcon->setObjectName("lblTypeIcon");
        lblTypeIcon->setEnabled(true);
        lblTypeIcon->setMinimumSize(QSize(110, 110));
        lblTypeIcon->setMaximumSize(QSize(110, 110));
        lblTypeIcon->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblTypeIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon->setScaledContents(true);
        lblTypeIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lblTypeIcon);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lblTemp = new QLabel(widget_3);
        lblTemp->setObjectName("lblTemp");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setPointSize(50);
        font4.setBold(false);
        font4.setItalic(false);
        lblTemp->setFont(font4);
        lblTemp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 50pt \"Arial\";\n"
"background-color: rgba(0, 255, 255, 0);"));

        horizontalLayout_3->addWidget(lblTemp);

        horizontalSpacer_2 = new QSpacerItem(18, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, -1, 0, 38);
        lblCity = new QLabel(widget_3);
        lblCity->setObjectName("lblCity");
        lblCity->setLayoutDirection(Qt::LeftToRight);
        lblCity->setStyleSheet(QString::fromUtf8("font: 15pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(255, 255, 255,0);"));
        lblCity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lblCity);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblType = new QLabel(widget_3);
        lblType->setObjectName("lblType");
        lblType->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(lblType);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        lblLowHigh = new QLabel(widget_3);
        lblLowHigh->setObjectName("lblLowHigh");
        lblLowHigh->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(lblLowHigh);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_2);

        widget_4 = new QWidget(widget_10);
        widget_4->setObjectName("widget_4");
        widget_4->setEnabled(true);
        widget_4->setGeometry(QRect(10, 0, 781, 59));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 170, 255,0);"));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setObjectName("horizontalLayout");
        leCity = new QLineEdit(widget_4);
        leCity->setObjectName("leCity");
        leCity->setMinimumSize(QSize(240, 0));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font5.setPointSize(12);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setStyleStrategy(QFont::PreferDefault);
        leCity->setFont(font5);
        leCity->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;\n"
"padding: 1px 5px"));
        leCity->setFrame(true);
        leCity->setCursorPosition(0);
        leCity->setClearButtonEnabled(true);

        horizontalLayout->addWidget(leCity);

        btnSearch = new QPushButton(widget_4);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnSearch->setIcon(icon);

        horizontalLayout->addWidget(btnSearch);

        label = new QLabel(widget_4);
        label->setObjectName("label");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font6.setPointSize(8);
        font6.setBold(false);
        font6.setItalic(false);
        label->setFont(font6);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);\n"
"font: 8pt \"Microsoft YaHei UI\";"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        lblDate = new QLabel(widget_4);
        lblDate->setObjectName("lblDate");
        lblDate->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";\n"
"background-color: rgba(255, 255, 255,0);"));

        horizontalLayout->addWidget(lblDate);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblGanMao->setText(QCoreApplication::translate("MainWindow", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\204\277\347\253\245\343\200\201\350\200\201\345\271\264\344\272\272\345\217\212\345\277\203\350\204\217\343\200\201\345\221\274\345\220\270\347\263\273\347\273\237\347\226\276\347\227\205\346\202\243\350\200\205\344\272\272\347\276\244\345\272\224\345\207\217\345\260\221\351\225\277\346\227\266\351\227\264\346\210\226\351\253\230\345\274\272\345\272\246\346\210\267\345\244\226\351\224\273\347\202\274", nullptr));
        lblWindIcon->setText(QString());
        lblWindFx->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblWindFl->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lblPm25Icon->setText(QString());
        lblWindFx_4->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        lblPm25->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        lblShiduIcon->setText(QString());
        lblWindFx_5->setText(QCoreApplication::translate("MainWindow", "\346\271\277   \345\272\246", nullptr));
        lblShidu->setText(QCoreApplication::translate("MainWindow", "60%", nullptr));
        lblAqiIcon->setText(QString());
        lblWindFx_6->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        lblQuality->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lblWeek0->setText(QCoreApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        lblWeek1->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        lblWeek2->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        lblWeek3->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\234\237\345\233\233", nullptr));
        lblWeek4->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\234\237\344\272\224", nullptr));
        lblWeek5->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\234\237\345\205\255", nullptr));
        lblDate0->setText(QCoreApplication::translate("MainWindow", "01/01", nullptr));
        lblDate1->setText(QCoreApplication::translate("MainWindow", "01/02", nullptr));
        lblDate2->setText(QCoreApplication::translate("MainWindow", "01/03", nullptr));
        lblDate3->setText(QCoreApplication::translate("MainWindow", "01/04", nullptr));
        lblDate4->setText(QCoreApplication::translate("MainWindow", "01/05", nullptr));
        lblDate5->setText(QCoreApplication::translate("MainWindow", "01/06", nullptr));
        lblTypeIcon0->setText(QString());
        lblTypeIcon2->setText(QString());
        lblTypeIcon5->setText(QString());
        lblType5->setText(QCoreApplication::translate("MainWindow", "\346\232\264\351\233\250", nullptr));
        lblTypeIcon1->setText(QString());
        lblType0->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        lblType1->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        lblType2->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblType3->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblTypeIcon3->setText(QString());
        lblTypeIcon4->setText(QString());
        lblType4->setText(QCoreApplication::translate("MainWindow", "\344\270\255\351\233\250", nullptr));
        lblQuality0->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        lblQuality1->setText(QCoreApplication::translate("MainWindow", "\350\211\257", nullptr));
        lblQuality2->setText(QCoreApplication::translate("MainWindow", "\350\275\273\345\272\246", nullptr));
        lblQuality3->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\272\246", nullptr));
        lblQuality4->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\272\246", nullptr));
        lblQuality5->setText(QCoreApplication::translate("MainWindow", "\344\270\245\351\207\215", nullptr));
        lblHighCurve->setText(QString());
        lblLowCurve->setText(QString());
        lblFl5->setText(QCoreApplication::translate("MainWindow", "1\347\272\247", nullptr));
        lblFl1->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lblFx2->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFl3->setText(QCoreApplication::translate("MainWindow", "1\347\272\247", nullptr));
        lblFl0->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFx3->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFx5->setText(QCoreApplication::translate("MainWindow", "\350\245\277\351\243\216", nullptr));
        lblFl2->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFx0->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lblFl4->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFx4->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        lblFx1->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\214\227\351\243\216", nullptr));
        lblTypeIcon->setText(QString());
        lblTemp->setText(QCoreApplication::translate("MainWindow", "32\302\260", nullptr));
        lblCity->setText(QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254", nullptr));
        lblType->setText(QCoreApplication::translate("MainWindow", "\346\231\264\350\275\254\345\244\232\344\272\221", nullptr));
        lblLowHigh->setText(QCoreApplication::translate("MainWindow", "19\302\260~31\302\260", nullptr));
        leCity->setInputMask(QString());
        leCity->setText(QString());
        leCity->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\237\216\345\270\202", nullptr));
        btnSearch->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\351\202\223\344\270\207\347\251\277\345\210\266\344\275\234   \350\201\224\347\263\273\346\226\271\345\274\217\357\274\23217784775978", nullptr));
        lblDate->setText(QCoreApplication::translate("MainWindow", "2024/07/23\346\230\237\346\234\237\344\272\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
