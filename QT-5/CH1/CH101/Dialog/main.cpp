﻿#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //显示弹窗
    Dialog w;
    w.show();

    return a.exec();
}
