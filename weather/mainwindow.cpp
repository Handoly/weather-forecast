#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <weathertool.h>
#include <QDesktopServices>

#include <QPainter>

#define INCREMENT   3   //温度每升高/降低一度 ，Y轴坐标的增量
#define POINT_RADIUS    3   //曲线描点的大小
#define TEXT_OFFSET_X   12  //文本
#define TEXT_OFFSET_Y   12

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowFlag(Qt::FramelessWindowHint); //设置窗口无边框
    setFixedSize(width(),height());     //设置固定窗口大小

    //构建右键菜单
    mExitMenu = new QMenu(this);
    mExitAct = new QAction();

    mExitAct->setText("退出");    //设置退出文本
    mExitAct->setIcon(QIcon(":/res/close.png"));    //添加图标

    mExitMenu->addAction(mExitAct);     //将退出添加到菜单

    //点击退出按钮发出triggered信号，qApp执行退出操作，[=]是lambda函数，第二个参数与教程不一样，需要添加“&”.
    connect(mExitAct,&QAction::triggered,this,[=]{  qApp->exit();   });

    //UI初始化
    //将控件添加到控件数组
    //星期和日期
    mWeekList << ui->lblWeek0 << ui->lblWeek1 << ui->lblWeek2 << ui->lblWeek3 << ui->lblWeek4 << ui->lblWeek5;
    mDateList << ui->lblDate0 << ui->lblDate1 << ui->lblDate2 << ui->lblDate3 << ui->lblDate4 << ui->lblDate5;

    //天气和天气图标
    mTypeList << ui->lblType0 << ui->lblType1 << ui->lblType2 << ui->lblType3 << ui->lblType4 << ui->lblType5;
    mTypeIconList << ui->lblTypeIcon0 << ui->lblTypeIcon1 << ui->lblTypeIcon2 << ui->lblTypeIcon3 << ui->lblTypeIcon4 << ui->lblTypeIcon5;

    //天气指数
    mAqiList << ui->lblQuality0 << ui->lblQuality1 << ui->lblQuality2 << ui->lblQuality3 << ui->lblQuality4 << ui->lblQuality5;

    //风向风力
    mFxList << ui->lblFx0 << ui->lblFx1 << ui->lblFx2 << ui->lblFx3 << ui->lblFx4 << ui->lblFx5;
    mFlList << ui->lblFl0 << ui->lblFl1 << ui->lblFl2 << ui->lblFl3 << ui->lblFl4 << ui->lblFl5;

    //以天气类型为Key，图标资源路径为value
    mTypeMap.insert("暴雪",":/res/type/BaoXue.png");
    mTypeMap.insert("暴雨",":/res/type/BaoYu.png");
    mTypeMap.insert("暴雨到大暴雨",":/res/type/BaoYuDaoDaBaoYu.png");
    mTypeMap.insert("大暴雨",":/res/type/DaBaoYu.png");
    mTypeMap.insert("大暴雨到特大暴雨",":/res/type/DaBaoYuDaoTeDaBaoYu.png");
    mTypeMap.insert("大到暴雪",":/res/type/DaDaoBaoXue.png");
    mTypeMap.insert("大雪",":/res/type/DaXue.png");
    mTypeMap.insert("大雨",":/res/type/DaYu.png");
    mTypeMap.insert("冻雨",":/res/type/DongYu.png");
    mTypeMap.insert("多云",":/res/type/DuoYun.png");
    mTypeMap.insert("浮沉",":/res/type/FuChen.png");
    mTypeMap.insert("雷阵雨",":/res/type/LeiZhenYu.png");
    mTypeMap.insert("雷阵雨伴有冰雹",":/res/type/LeiZhenYuBanYouBingBao.png");
    mTypeMap.insert("霾",":/res/type/Mai.png");
    mTypeMap.insert("强沙尘暴",":/res/type/QiangShaChenBao.png");
    mTypeMap.insert("晴",":/res/type/Qing.png");
    mTypeMap.insert("沙尘暴",":/res/type/ShaChenBao.png");
    mTypeMap.insert("特大暴雨",":/res/type/TeDaBaoYu.png");
    mTypeMap.insert("undefined",":/res/type/undefined.png");
    mTypeMap.insert("雾",":/res/type/Wu.png");
    mTypeMap.insert("小到中雪",":/res/type/XiaoDaoZhongXue.png");
    mTypeMap.insert("小到中雨",":/res/type/XiaoDaoZhongYu.png");
    mTypeMap.insert("小雪",":/res/type/XiaoXue.png");
    mTypeMap.insert("小雨",":/res/type/XiaoYu.png");
    mTypeMap.insert("雪",":/res/type/Xue.png");
    mTypeMap.insert("扬沙",":/res/type/YangSha.png");
    mTypeMap.insert("阴",":/res/type/Yin.png");
    mTypeMap.insert("雨",":/res/type/Yu.png");
    mTypeMap.insert("雨夹雪",":/res/type/YuJiaXue.png");
    mTypeMap.insert("阵雪",":/res/type/ZhenXue.png");
    mTypeMap.insert("阵雨",":/res/type/ZhenYu.png");
    mTypeMap.insert("中到大雪",":/res/type/ZhongDaoDaYu.png");
    mTypeMap.insert("中到大雨",":/res/type/ZhongDaoDaXue.png");
    mTypeMap.insert("中雪",":/res/type/ZhongXue.png");
    mTypeMap.insert("中雨",":/res/type/ZhongYu.png");

    //4.网络请求
    mNetAccessManager = new QNetworkAccessManager(this);
    //获取到网络请求的数据后，调用此函数
    connect(mNetAccessManager,&QNetworkAccessManager::finished,this,&MainWindow::onReplied);

    //直接在构造中，请求天气数据
    //101040100 是重庆的城市编码
    // getWeatherInfo("101040100");
    getWeatherInfo("合川");

    //5.给标签（label）添加事件过滤器
    //参数指定为this，也就是当前窗口对象 MainWindow
    ui->lblHighCurve->installEventFilter(this);
    ui->lblLowCurve->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//重写父类的虚函数
//父类中默认的实现是 忽略右键菜单事件
//重写后，可处理右键菜单
void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    //弹出右键菜单
    mExitMenu->exec(QCursor::pos());    //传递鼠标位置

    event->accept();    //表明事情已经处理，不需要向上传递
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    mOffset = event->globalPos() - this->pos();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos() - mOffset);
}

void MainWindow::getWeatherInfo(QString cityName)
{
    QString cityCode = WeatherTool::getCityCode(cityName);
    qDebug()<<"cityCode: "<<cityCode;
    if(cityCode.isEmpty())  //如果返回为空，可能是输入为空或者输入错误
    {
        QMessageBox::warning(this,"天气","请检查输入是否正确。",QMessageBox::Ok);
        return;
    }
    QUrl url("http://t.weather.sojson.com/api/weather/city/" + cityCode);
    mNetAccessManager->get(QNetworkRequest(url));
}

void MainWindow::parseJson(QByteArray &bytearray)
{
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(bytearray,&err);
    if(err.error != QJsonParseError::NoError)   //如果解析出错了，直接返回
    {
        return;
    }
    QJsonObject rootObj = doc.object();
    qDebug()<<"message:"<<rootObj.value("message").toString();

    //  1.解析日期和城市
    mToday.date = rootObj.value("date").toString();
    mToday.city = rootObj.value("cityInfo").toObject().value("city").toString();

    //  2.解析yesterday
    QJsonObject objData = rootObj.value("data").toObject();

    QJsonObject objYesterday = objData.value("yesterday").toObject();
    mDay[0].week = objYesterday.value("week").toString();
    mDay[0].date = objYesterday.value("ymd").toString();

    mDay[0].type = objYesterday.value("type").toString();

    QString s;
    s = objYesterday.value("high").toString().split(" ").at(1);// "38℃"
    s = s.left(s.length() - 1); //38
    mDay[0].high = s.toInt();

    s = objYesterday.value("low").toString().split(" ").at(1);// "30℃"
    s = s.left(s.length() - 1); //30
    mDay[0].low = s.toInt();

    // 风向风力
    mDay[0].fx = objYesterday.value("fx").toString();
    mDay[0].fl = objYesterday.value("fl").toString();

    //天气污染指数
    mDay[0].aqi = objYesterday.value("aqi").toDouble();


    //  3.解析forcast中5天的数据
    QJsonArray forecastArr = objData.value("forecast").toArray();

    for(int i=0;i<5;i++)
    {
        QJsonObject objForecast = forecastArr[i].toObject();
        //星期与日期
        mDay[i+1].week = objForecast.value("week").toString();
        mDay[i+1].date = objForecast.value("ymd").toString();

        //天气类型
        mDay[i+1].type = objForecast.value("type").toString();

        //高温低温
        QString s;
        s = objForecast.value("high").toString().split(" ").at(1);// "38℃"
        s = s.left(s.length() - 1); //38
        mDay[i+1].high = s.toInt();

        s = objForecast.value("low").toString().split(" ").at(1);// "30℃"
        s = s.left(s.length() - 1); //30
        mDay[i+1].low = s.toInt();

        // 风向风力
        mDay[i+1].fx = objForecast.value("fx").toString();
        mDay[i+1].fl = objForecast.value("fl").toString();

        //天气指数
        mDay[i+1].aqi = objForecast.value("aqi").toInt();
    }

    //  4.解析今天的数据
    mToday.ganmao = objData.value("ganmao").toString();

    qDebug()<<"objData.value(\"wendu\"):"<<objData.value("wendu").toString().toDouble();
    mToday.wendu = objData.value("wendu").toString().toDouble();
    qDebug()<<"mToday.wendu:"<<mToday.wendu;

    mToday.shidu = objData.value("shidu").toString();
    mToday.pm25 = objData.value("pm25").toInt();
    mToday.quality = objData.value("quality").toString();

    //  5.forecast中第一个元素，也是今天的数据
    mToday.type = mDay[1].type;

    mToday.fx = mDay[1].fx;
    mToday.fl = mDay[1].fl;

    mToday.high = mDay[1].high;
    mToday.low = mDay[1].low;

    //  6.更新UI
    //  6.1更新文本和图标
    updateUI();

    //  6.2绘制温度曲线
    ui->lblHighCurve->update(); // 调用update触发paint事件给标签，事件被MainWindow窗口拦截，调用eventFilter方法
    ui->lblLowCurve->update();
}

void MainWindow::updateUI()
{
    //  1.更新日期和城市
    ui->lblDate->setText(QDate::fromString(mToday.date,"yyyyMMdd").toString("yyyy/MM/dd") + " " + mDay[1].week);
    ui->lblCity->setText(mToday.city);

    //  2.更新今天

    //      2.1温度
    ui->lblTemp->setText(QString("%1").arg(mToday.wendu));
    //      2.2天气类型和图标
    ui->lblType->setText(mToday.type);
    ui->lblTypeIcon->setPixmap(mTypeMap[mToday.type]);
    //      2.3高温低温
    ui->lblLowHigh->setText(QString("%1°~%2°").arg(mToday.low).arg(mToday.high));
    //      2.4感冒指数
    ui->lblGanMao->setText(QString("感冒指数：%1").arg(mToday.ganmao));
    //      2.5风向风力
    ui->lblWindFx->setText(mToday.fx);
    ui->lblWindFl->setText(mToday.fl);
    //      2.6Pm2.5
    ui->lblPm25->setText(QString("%1").arg(mToday.pm25));
    //      2.7湿度
    ui->lblShidu->setText(mToday.shidu);
    //      2.8空气质量
    ui->lblQuality->setText(mToday.quality);

    //  3.更新六天
    for(int i=0;i<6;i++)
    {
        //3.1星期和日期
        mWeekList[i]->setText(QString("周%1").arg(mDay[i].week.right(1)));
        qDebug()<<"QString(\"周%1\").arg(mDay[i].week.right(1)):"<<QString("周%1").arg(mDay[i].week.right(1));
        ui->lblWeek0->setText("昨天");
        ui->lblWeek1->setText("今天");
        ui->lblWeek2->setText("明天");
        QStringList ymdList = mDay[i].date.split("-");
        mDateList[i]->setText(ymdList[1] + "/" + ymdList[2]);

        //3.2更新天气类型和图标
        mTypeList[i]->setText(mDay[i].type);
        mTypeIconList[i]->setPixmap(mTypeMap[mDay[i].type]);

        //3.3更新空气质量
        qDebug()<<"mDay[i].aqi: "<<mDay[i].aqi;
        if(mDay[i].aqi > 0 && mDay[i].aqi <=50)
        {
            mAqiList[i]->setText("优 ");
            mAqiList[i]->setStyleSheet("background-color: rgb(121, 184, 0);");
        }
        else if(mDay[i].aqi > 50 && mDay[i].aqi <= 100)
        {
            mAqiList[i]->setText("良 ");
            mAqiList[i]->setStyleSheet("background-color: rgb(255,187,23);");
        }
        else if(mDay[i].aqi > 100 && mDay[i].aqi <= 150)
        {
            mAqiList[i]->setText("轻度");
            mAqiList[i]->setStyleSheet("background-color: rgb(255,87,97);");
        }
        else if(mDay[i].aqi > 150 && mDay[i].aqi <= 200)
        {
            mAqiList[i]->setText("中度");
            mAqiList[i]->setStyleSheet("background-color: rgb(235,17,27);");
        }
        else if(mDay[i].aqi > 200 && mDay[i].aqi <= 250)
        {
            mAqiList[i]->setText("重度");
            mAqiList[i]->setStyleSheet("background-color: rgb(170,0,0);");
        }
        else
        {
            mAqiList[i]->setText("严重");
            mAqiList[i]->setStyleSheet("background-color: rgb(110,0,0);");
        }

        //3.4更新风力风向
        mFxList[i]->setText(mDay[i].fx);
        mFlList[i]->setText(mDay[i].fl);
    }

}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->lblHighCurve && event->type() == QEvent::Paint)
    {
        paintHighCurve();
    }

    if(watched == ui->lblLowCurve && event->type() == QEvent::Paint)
    {
        paintLowCurve();
    }

    return QWidget::eventFilter(watched,event);
}

void MainWindow::paintHighCurve()
{
    QPainter painter(ui->lblHighCurve);

    //抗锯齿
    painter.setRenderHint(QPainter::Antialiasing,true);

    //1.获取x坐标
    int pointX[6] = {'\0'};
    for(int i=0;i<6;i++)
    {
        pointX[i] = mTypeList[i]->pos().x() + mTypeList[i]->width()/2 - 15;
    }

    //2.获取y坐标
    int tempSum = 0;
    int tempAverage = 0;
    for(int i=0;i<6;i++)
    {
        tempSum += mDay[i].high;
    }
    tempAverage = tempSum / 6;    //最高温的平均值

    //计算y轴坐标
    int pointY[6] = {'\0'};
    int yCenter = ui->lblHighCurve->height()/2;
    for(int i=0l;i<6;i++)
    {
        pointY[i] = yCenter - ((mDay[i].high - tempAverage) * INCREMENT);
    }

    //3.开始绘制
    //3.1初始化画笔
    QPen pen = painter.pen();
    pen.setWidth(1);                //设置画笔宽度
    pen.setColor(QColor(255,170,0));//设置画笔颜色

    painter.setPen(pen);
    painter.setBrush(QColor(255,170,0));    //设置画刷的颜色-设置内部填充的颜色

    //3.2画点、写文本
    for(int i=0;i<6;i++)
    {
        //显示点
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),POINT_RADIUS,POINT_RADIUS);  //ellipse :椭圆

        //显示温度文本
        painter.drawText(pointX[i] - TEXT_OFFSET_X, pointY[i] - TEXT_OFFSET_Y,QString("%1°").arg(mDay[i].high));
    }

    //3.3绘制曲线
    for(int i=0;i<5;i++)
    {
        if(i==0)
        {
            pen.setStyle(Qt::DotLine);      //虚线
            painter.setPen(pen);
        }else
        {
            pen.setStyle(Qt::SolidLine);      //虚线
            painter.setPen(pen);
        }
        painter.drawLine(pointX[i],pointY[i],pointX[i+1],pointY[i+1]);
    }


}

void MainWindow::paintLowCurve()
{
    QPainter painter(ui->lblLowCurve);

    //抗锯齿
    painter.setRenderHint(QPainter::Antialiasing,true);

    //1.获取x坐标
    int pointX[6] = {'\0'};
    for(int i=0;i<6;i++)
    {
        pointX[i] = mTypeList[i]->pos().x() + mTypeList[i]->width()/2 - 15;
    }

    //2.获取y坐标
    int tempSum = 0;
    int tempAverage = 0;
    for(int i=0;i<6;i++)
    {
        tempSum += mDay[i].low;
    }
    tempAverage = tempSum / 6;    //最高温的平均值

    //计算y轴坐标
    int pointY[6] = {'\0'};
    int yCenter = ui->lblLowCurve->height()/2;
    for(int i=0l;i<6;i++)
    {
        pointY[i] = yCenter - ((mDay[i].low - tempAverage) * INCREMENT);
    }

    //3.开始绘制
    //3.1初始化画笔
    QPen pen = painter.pen();
    pen.setWidth(1);                //设置画笔宽度
    pen.setColor(QColor(0,255,255));//设置画笔颜色

    painter.setPen(pen);
    painter.setBrush(QColor(0,255,255));    //设置画刷的颜色-设置内部填充的颜色

    //3.2画点、写文本
    for(int i=0;i<6;i++)
    {
        //显示点
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),POINT_RADIUS,POINT_RADIUS);  //ellipse :椭圆

        //显示温度文本
        painter.drawText(pointX[i] - TEXT_OFFSET_X, pointY[i] - TEXT_OFFSET_Y,QString("%1°").arg(mDay[i].low));
    }

    //3.3绘制曲线
    for(int i=0;i<5;i++)
    {
        if(i==0)
        {
            pen.setStyle(Qt::DotLine);      //虚线
            painter.setPen(pen);
        }else
        {
            pen.setStyle(Qt::SolidLine);      //虚线
            painter.setPen(pen);
        }
        painter.drawLine(pointX[i],pointY[i],pointX[i+1],pointY[i+1]);
    }

}

void MainWindow::onReplied(QNetworkReply *reply) //获取到网络请求的数据后，调用此函数
{
    qDebug()<<"onreply success:";
    int status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    qDebug()<<"operation："<<reply->operation();             //操作码
    qDebug()<<"status_code:"<<status_code;                  //状态响应码
    qDebug()<<"url:"<<reply->url();                         //请求的url
    qDebug()<<"rawHeaderList:"<<reply->rawHeaderList();     //响应头

    if(reply->error() != QNetworkReply::NoError || status_code != 200)    //请求失败
    {
        qDebug()<<reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","请求数据失败！请检查网络配置：是否已连接网络。",QMessageBox::Ok);
    }else{  //请求成功，进行数据处理
        QByteArray byteArray = reply->readAll();
        qDebug()<<"read all:"<<byteArray.data();

        parseJson(byteArray);
    }

    reply->deleteLater();   //释放栈，防止内存泄漏
}

void MainWindow::on_btnSearch_clicked()
{
    QString cityName = ui->leCity->text();
    getWeatherInfo(cityName);
}



