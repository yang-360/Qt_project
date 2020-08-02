#include "mainwindow.h"
#include <QApplication>
#include <QSqlDriver>
#include <QSqlRecord>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QTextCodec>
#include <QTime>
#include <QtDebug>
int main(int argc, char *argv[])
{
    //连接数据库

    QSqlDatabase db =QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("easybook-3313b0");          //设置数据库主机名
    db.setDatabaseName("qtDB.db");              //设置数据库名
    db.setUserName("ly");                //设置数据库用户名
    db.setPassword("123456");                   //设置数据库密码
    db.open();                             		//打开
    //创建连接
    QSqlQuery query;
    //创建数据表结构
    bool success = query.exec("create table automobil(id int primary key,attribute varchar,type varchar,kind varchar,nation int,carnumber int,elevaltor int,distance int,oil int,temperature int)");
    if(success)
    {
        qDebug()<<QObject::tr("数据库创建成功！\n");
    }
    else
    {
        qDebug()<<QObject::tr("error!\n");
    }
    //查询
    query.exec("select * from automobil");//执行sql语句
    QSqlRecord rec = query.record();//获取返回结果
    qDebug() << QObject::tr("automobil表字段数：" )<< rec.count();//输出结果

    //插入记录
    QTime t; //定时器
    t.start(); //启动
    query.prepare("insert into automobil values(?,?,?,?,?,?,?,?,?,?)");//占位符

    long records=100;
    for(int i=0;i<records;i++)
    {
        //绑定插入数据
        query.bindValue(0,i);
        query.bindValue(1,"四轮");
        query.bindValue(2,"轿车");
        query.bindValue(3,"富康");
        query.bindValue(4,rand()%100);
        query.bindValue(5,rand()%10000);
        query.bindValue(6,rand()%300);
        query.bindValue(7,rand()%200000);
        query.bindValue(8,rand()%52);
        query.bindValue(9,rand()%100);

        success=query.exec();//在query中插入值
        if(!success)
        {
            QSqlError lastError=query.lastError();
            qDebug()<<lastError.driverText()<<QString(QObject::tr("插入失败"));
        }
    }
    // 计时及统计
    qDebug()<<QObject::tr("插入 %1 条记录，耗时：%2 ms").arg(records).arg(t.elapsed());//

    //排序
    t.restart();//重新计时
    success=query.exec("select * from automobil order by id desc");//按ID排序
    if(success)
        qDebug()<<QObject::tr("排序 %1 条记录，耗时：%2 ms").arg(records).arg(t.elapsed());
    else
        qDebug()<<QObject::tr("排序失败！");

    //更新记录
    t.restart();//重新计时
    for(int i=0;i<records;i++)
    {
        query.clear();//清除原有事务
        query.prepare(QString("update automobil set attribute=?,type=?,"
                              "kind=?,nation=?,"
                              "carnumber=?,elevaltor=?,"
                              "distance=?,oil=?,"
                              "temperature=? where id=%1").arg(i));//占位


        query.bindValue(0,"四轮");
        query.bindValue(1,"轿车");
        query.bindValue(2,"富康");
        query.bindValue(3,rand()%100);
        query.bindValue(4,rand()%10000);
        query.bindValue(5,rand()%300);
        query.bindValue(6,rand()%200000);
        query.bindValue(7,rand()%52);
        query.bindValue(8,rand()%100);

        success=query.exec();//执行
        if(!success)
        {
            QSqlError lastError=query.lastError();
            qDebug()<<lastError.driverText()<<QString(QObject::tr("更新失败"));
        }
    }
    qDebug()<<QObject::tr("更新 %1 条记录，耗时：%2 ms").arg(records).arg(t.elapsed());


    //删除
        t.restart();//重新计时
        query.exec("delete from automobil where id=15");
        qDebug()<<QObject::tr("删除一条记录，耗时：%1 ms").arg(t.elapsed());







    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
