#include "mainwindow.h"
#include"dialog.h"
#include <QApplication>
#include <QPixmap>
#include <QSplashScreen>
#include"drawer.h"
#include"progressdlg.h"
#include"palette.h"
#include"digiclock.h"
#include"extensiondlg.h"
#include"shapewidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //4-1
    //    Dialog D;
    //    D.show();
    //4-2
    //    drawer W;
    //    W.show();
    //4-3
    //    progressdlg p;
    //    p.show();
    //4-4
    //palette p;
    //p.show();
    //4-5
    //digiclock c;
    //c.show();
    //4-6
    //extensiondlg e;
    //e.show();
    //4-7
    //shapewidget s;
    //s.show();
    //4-8
    QPixmap pixmap(":/src/Qt.png");				//(a)
    QSplashScreen splash(pixmap);			//(b)
    splash.show();							//显示此启动图片
    a.processEvents();
        MainWindow w;
        w.show();
    splash.finish(&w);
    return a.exec();
}
