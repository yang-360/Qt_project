#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include<QList>
#include<QMap>
#include<QColor>
#include<QVariant>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //2_1
    //    QList<int> list;
    //    list<<1<<2<<3<<4<<5;
    //    QListIterator<int> i(list);
    //    for(;i.hasNext();)
    //    {
    //        qDebug()<<i.next();
    //    }

    //2_2
    //    QList<int> list;
    //    QMutableListIterator<int> i(list);
    //    for(int j=0;j<10;++j)
    //    {
    //        i.insert(j);
    //    }
    //    for(i.toFront();i.hasNext();)
    //    {
    //        qDebug()<<i.next();
    //    }
    //    for(i.toBack();i.hasPrevious();)
    //    {
    //        if(i.previous() %2 == 0)
    //        {
    //            i.remove();
    //        }
    //        else
    //        {
    //            i.setValue(i.peekNext()*10);
    //        }
    //    }
    //    for(i.toFront();i.hasNext();)
    //    {
    //        qDebug()<<i.next();
    //    }

    //2_3
    //    QList<int> list;
    //    for(int j=0;j<10;j++)
    //    {
    //        list.insert(list.end(),j);
    //    }
    //    QList<int>::iterator i;
    //    for(i = list.begin();i!= list.end();i++)
    //    {
    //        qDebug()<<(*i);
    //        *i=(*i)*10;
    //    }
    //    QList<int>::const_iterator ci;
    //    for(ci = list.constBegin();ci!=list.constEnd();ci++)
    //    {
    //        qDebug()<<*ci;
    //    }

    //2_4 错误方法不可用
    //    QMap<QString,QString>map;
    //    map.insert("beijing","111");
    //    map.insert("sjanghai","021");
    //    map.insert("nanjing","025");
    //    QMapIterator<QString,QString> i(map);
    //    for(;i.hasNext();i.next())
    //    {
    //        qDebug()<<" "<<i.key()<<" "<<i.value();
    //    }
    //    QMutableMapIterator<QString,QString> mi(map);
    //    if(mi.findNext("111"))
    //    {
    //        mi.setValue("010");
    //    }
    //    QMapIterator<QString,QString> modi(map);
    //    qDebug()<<" ";
    //    for(;modi.hasNext();)
    //    {
    //        qDebug()<<" "<<modi.key()<<" "<<modi.next().value();
    //    }
    //2_5
    //    QMap<QString,QString> map;
    //    map.insert("beijing","111");
    //    map.insert("sahnghai","021");
    //    map.insert("nanjing","025");
    //    QMap<QString,QString>::const_iterator i;
    //    for(i=map.constBegin();i!=map.constEnd();i++)
    //    {
    //        qDebug()<<" "<<i.key()<<" "<<i.value();
    //    }
    //    QMap<QString,QString>::iterator mi;
    //    mi = map.find("beijing");
    //    if(mi!=map.end())
    //    {
    //        mi.value() = "010";
    //    }
    //    QMap<QString,QString>::const_iterator modi;
    //    qDebug()<<" ";
    //    for(modi=map.constBegin();modi!=map.constEnd();modi++)
    //    {
    //        qDebug()<<" "<<modi.key()<<" "<<modi.value();
    //    }

    //2_6
    //    QVariant V(709);
    //    qDebug()<<V.toInt();
    //    QVariant W("hello");
    //    qDebug()<<W.toString();
    //    QMap<QString,QVariant>map;
    //    map["int"] = 709;
    //    map["double"] = 709.709;
    //    map["string"] = "Hello";
    //    map["color"] = QColor(255,0,0);
    //    qDebug()<<map["int"] << map["int"].toInt();
    //    qDebug()<<map["double"] << map["double"].toDouble();
    //    qDebug()<<map["string"] << map["string"].toString();
    //    qDebug()<<map["color"] << map["color"].value<QColor>();
    //    QStringList sl;
    //    sl<<"A"<<"B"<<"c"<<"d";
    //    QVariant slv(sl);
    //    if(slv.type() == QVariant::StringList)
    //    {
    //        QStringList list = slv.toStringList();
    //        for(int i=0;i<list.size();i++)
    //        {
    //            qDebug()<<list.at(i);
    //        }
    //    }

    //2_7
//    double a=-19.3,b=9.7;
//    double c=qAbs(a);
//    double max=qMax(b,c);
//    int bn=qRound(b);
//    int cn=qRound(c);
//    qDebug()<<"a="<<a;
//    qDebug()<<"b="<<b;
//    qDebug()<<"c=qAbs(a)"<<c;
//    qDebug()<<"max=qMax(b,c)"<<max;
//    qDebug()<<"bn=qRound(b)"<<bn;
//    qDebug()<<"cn=qRound(c)"<<cn;
//    qSwap(bn,cn);
//    qDebug()<<"qSwap(bn,cn):"<<"bn="<<bn<<"cn="<<cn;
}

MainWindow::~MainWindow()
{
    delete ui;
}

