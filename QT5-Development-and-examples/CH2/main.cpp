#include "mainwindow.h"
#include"widgetpushbutton.h"
#include <QApplication>
#include"treewidget.h"
#include"dialog2_10.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //2-1 --- 2-7
//    MainWindow w;
//    w.show();
    //2-8
//    widgetpushbutton W;
//    W.setGeometry(200,200,220,220);
//    W.show();
    //2-9
//    treeWidget W;
//    W.show();
    //2-10
    Dialog2_10 D;
    D.show();
    return a.exec();
}
