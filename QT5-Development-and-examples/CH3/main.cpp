#include "mainwindow.h"
#include<QSplitter>
#include<QTextEdit>
#include<QTextCodec>
#include<QApplication>
#include<dockwindows.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //3-1
    //    QFont font("ZYSong18030",12);
    //    a.setFont(font);
    //    QSplitter *splitterMain = new QSplitter(Qt::Horizontal,0);

    //    QTextEdit *textLeft = new QTextEdit(QObject::tr("left wiget"),splitterMain);
    //    textLeft->setAlignment(Qt::AlignCenter);

    //    QSplitter *splitterRight = new QSplitter(Qt::Vertical,splitterMain);
    //    splitterRight->setOpaqueResize(false);

    //    QTextEdit *textUp = new QTextEdit(QObject::tr("Top Wighet"),splitterRight);
    //    textUp->setAlignment(Qt::AlignCenter);

    //    QTextEdit * textBottom = new QTextEdit(QObject::tr("bottom widget"),splitterRight);
    //    textBottom->setAlignment(Qt::AlignCenter);

    //    splitterMain->setStretchFactor(1,1);
    //    splitterMain->setWindowTitle(QObject::tr("Splitter"));
    //    splitterMain->show();

    //3-2
    //    Dockwindows d;
    //    d.show();

    //3-3


    //    MainWindow w;
    //    w.show();
    return a.exec();
}
