#include "stackdlg.h"
#include <QHBoxLayout>
stackdlg::stackdlg(QWidget *parent) : QWidget(parent)
{
    QListWidget *list;
    QStackedWidget *stack;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;

    setWindowTitle(tr("stackWindows"));
    list = new QListWidget(this);

    list->insertItem(0,tr("windows1"));
    list->insertItem(1,tr("windows2"));
    list->insertItem(2,tr("windows3"));

    label1 = new QLabel(tr("windowstest1"));
    label2 = new QLabel(tr("windowstest2"));
    label3 = new QLabel(tr("windowstest3"));

    stack = new QStackedWidget(this);
    stack->addWidget(label1);
    stack->addWidget(label2);
    stack->addWidget(label3);

    QHBoxLayout * mmainLayoout = new QHBoxLayout(this);

    mmainLayoout->setMargin(5);
    mmainLayoout->setSpacing(5);
    mmainLayoout->addWidget(list);
    mmainLayoout->addWidget(stack,0,Qt::AlignHCenter);
    mmainLayoout->setStretchFactor(list,1);
    mmainLayoout->setStretchFactor(stack,3);
    connect(list,SIGNAL(currentRowChanged(int)),stack,SLOT(setCurrentIndex(int)));


}
