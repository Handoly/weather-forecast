#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include <QString>

class Today
{
public:
    Today()
    {
        date = "2024/07/23";
        city = "重庆";

        ganmao = "感冒指数";

        wendu = 0;
        shidu = "0";
        pm25 = 0;
        quality = "无数据";

        type = "多云";

        fl = "2级";
        fx = "南风";

        high = 30;
        low = 18;
    }

    QString date;
    QString city;

    QString ganmao;

    double wendu;
    QString shidu;
    int pm25;
    QString quality;

    QString type;

    QString fl;
    QString fx;

    int high;
    int low;


};

class Day
{
public:
    Day()
    {
        date = "2024/07/23";
        week = "周五";

        type = "多云";

        high = 30;
        low = 18;

        fl = "2级";
        fx = "南风";

        aqi = 0;
    }

    QString date;
    QString week;

    QString type;

    int high;
    int low;

    QString fl;
    QString fx;

    int aqi = 0;
};

#endif // WEATHERDATA_H
