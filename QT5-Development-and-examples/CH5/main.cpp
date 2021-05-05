#include "mainwindow.h"
#include"imgprocessor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    imgprocessor i;
    i.show();

//    MainWindow w;
//    w.show();
    return a.exec();
}
