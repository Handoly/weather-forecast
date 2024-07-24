#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QMenu>
#include <QContextMenuEvent>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>

#include <QMessageBox>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>

#include <QFile>

#include "weatherdata.h"



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

protected:
    //重写父类方法
    void contextMenuEvent(QContextMenuEvent *event);    //弹出右键菜单
    void mousePressEvent(QMouseEvent* event);   //鼠标按下事件
    void mouseMoveEvent(QMouseEvent* event);    //鼠标移动事件


    void getWeatherInfo(QString cityName);      //获取天气数据

    void parseJson(QByteArray& bytearray);      //解析请求到的Json数据

    void updateUI();    //更新UI界面

    //重写父类的eventfilter方法
    bool eventFilter(QObject *watched,QEvent* event);

    //绘制高低温曲线
    void paintHighCurve();
    void paintLowCurve();



private slots:
    void onReplied(QNetworkReply *reply);   //获取到网络请求的数据后，调用此函数


    void on_btnSearch_clicked();

private:
    QMenu* mExitMenu;   //右键退出菜单
    QAction* mExitAct;  //退出的行为 - 菜单项

    QPoint mOffset; //窗口移动时，鼠标与窗口坐上角的偏移

    QNetworkAccessManager* mNetAccessManager;   //HTTP请求

    //今天和6天的天气
    Today mToday;
    Day mDay[6];

    //星期和日期
    QList<QLabel*> mWeekList;
    QList<QLabel*> mDateList;

    //天气和天气图标
    QList<QLabel*> mTypeList;
    QList<QLabel*> mTypeIconList;

    //天气污染指数
    QList<QLabel*> mAqiList;

    //风力和方向
    QList<QLabel*> mFlList;
    QList<QLabel*> mFxList;


    QMap<QString,QString> mTypeMap;
};
#endif // MAINWINDOW_H
