#include "mainwindow.h"
#include"ch1_1dialog.h"
#include"ch1_2dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //1.0计算圆的面积UI
//    CH1_1Dialog W;
//    W.show();
//    2.0计算圆的面积
    ch1_2dialog W;
    W.show();

//    MainWindow w;
//    w.show();
    return a.exec();
}
