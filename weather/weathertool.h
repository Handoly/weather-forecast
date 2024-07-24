#ifndef WEATHERTOOL_H
#define WEATHERTOOL_H

#include <QMap>
#include <QString>

#include <QFile>

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>

class WeatherTool
{
    //实现从城市名称获取城市编码
private:
    static QMap<QString,QString> mCityMap;
    static void initCityMap()
    {
        //  1.读取文件
        QString filePath = ":/res/citycode.json";

        QFile file(filePath);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QByteArray json = file.readAll();
        file.close();

        //  2.解析并写入Map
        QJsonParseError err;
        QJsonDocument doc = QJsonDocument::fromJson(json,&err);
        if(err.error != QJsonParseError::NoError)   //出错
        {
            return;
        }
        if(!doc.isArray())  //不是数组
        {
            return;
        }
        QJsonArray cities = doc.array();
        for(int i=0;i<cities.size();i++)
        {
            QString city = cities[i].toObject().value("city_name").toString();
            QString code = cities[i].toObject().value("city_code").toString();
            if(code.size() > 0) //code不为空才添加
            {
                mCityMap.insert(city,code);
            }
        }
    }

public:
    static QString getCityCode(QString cityName)
    {
        if(mCityMap.isEmpty())
        {
            initCityMap();
        }

        QMap<QString,QString>::Iterator it = mCityMap.find(cityName); //返回key和value

        //  重庆/重庆市都正确
        if(it == mCityMap.end())
        {
            it = mCityMap.find(cityName + "市"); //返回key和value
        }

        //  合川/合川区都正确
        if(it == mCityMap.end())
        {
            it = mCityMap.find(cityName + "区"); //返回key和value
        }

        //  缙云/缙云县都正确
        if(it == mCityMap.end())
        {
            it = mCityMap.find(cityName + "县"); //返回key和value
        }

        if(it != mCityMap.end())
        {
            return it.value();  //返回city_code
        }
        return "";
    }

    static QList<QString> getCityName()
    {
        if(mCityMap.isEmpty())
        {
            initCityMap();
        }

        QList<QString> cityNameList = mCityMap.keys(); //返回key和value
        return cityNameList;
    }
};

QMap<QString,QString> WeatherTool::mCityMap = {};

#endif // WEATHERTOOL_H
