#include <QCoreApplication>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> list;
    list<<1<<2<<3<<4<<5;
    //QList 的只读迭代器
    QListIterator<int> i(list);
    //hasNext() 下一个节点
    for(;i.hasNext();)
        qDebug()<<i.next();
    return a.exec();
}
