#include "mainwindow.h"
#include<QSplitter>
#include<QTextEdit>
#include<QTextCodec>
#include<QApplication>
#include<dockwindows.h>
#include"stackdlg.h"
#include"interfacedialog.h"
#include"content.h"
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
    //    stackdlg d;
    //    d.show();

    //3-4
    //    interfacedialog in;
    //    in.show();

    //3-5

    QFont font("AR PL KaitiM GB",12);	//设置整个程序采用的字体与字号
    a.setFont(font);

    //新建一个水平分割窗对象，作为主布局框
    QSplitter *splitterMain =new QSplitter(Qt::Horizontal,0);
    splitterMain->setOpaqueResize(true);

    QListWidget *list =new QListWidget(splitterMain);	//(a)
    list->insertItem(0,QObject::tr("基本信息"));
    list->insertItem(1,QObject::tr("联系方式"));
    list->insertItem(2,QObject::tr("详细资料"));

    content *conten =new content(splitterMain);		//(b)

    QObject::connect(list,SIGNAL(currentRowChanged(int)),conten->stack,SLOT(setCurrentIndex(int)));

    //设置主布局框即水平分割窗的标题
    splitterMain->setWindowTitle(QObject::tr("修改用户资料"));
    //设置主布局框即水平分割窗的最小尺寸
    splitterMain->setMinimumSize(splitterMain->minimumSize());
    //设置主布局框即水平分割窗的最大尺寸
    splitterMain->setMaximumSize(splitterMain->maximumSize());
    splitterMain->show();	//显示主布局框，其上面的控件一同显示




    //    MainWindow w;
    //    w.show();
    return a.exec();
}
