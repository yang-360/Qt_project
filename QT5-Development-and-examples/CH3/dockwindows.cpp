#include "dockwindows.h"
#include<QTextEdit>
#include<QDockWidget>
Dockwindows::Dockwindows(QWidget *parent) : QMainWindow(parent)
{
    setWindowTitle(tr("dockwindows"));

    QTextEdit *te = new QTextEdit(this);
    te->setText(tr("main windows"));
    te->setAlignment(Qt::AlignCenter);
    setCentralWidget(te);

    QDockWidget *dock = new QDockWidget(tr("DockWindow1"),this);
    dock->setFeatures(QDockWidget::DockWidgetMovable);
    dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);

    QTextEdit *te1 = new QTextEdit();
    te1->setText(tr("windows,the dock widget can be moved,between docks by the user """));
    dock->setWidget(te1);
    addDockWidget(Qt::RightDockWidgetArea,dock);

    dock = new QDockWidget(tr("DockWindow2"),this);
    dock->setFeatures(QDockWidget::DockWidgetClosable | QDockWidget::DockWidgetFloatable);

    QTextEdit *te2 = new QTextEdit();
    te1->setText(tr("windows,the dock widget can be moved,between docks by the user """));
    dock->setWidget(te2);
    addDockWidget(Qt::RightDockWidgetArea,dock);

     dock = new QDockWidget(tr("DockWindow2"),this);
     dock->setFeatures(QDockWidget::AllDockWidgetFeatures);

     QTextEdit *te3 = new QTextEdit();
     te1->setText(tr("windows,the dock widget can be moved,between docks by the user """));
     dock->setWidget(te3);
     addDockWidget(Qt::RightDockWidgetArea,dock);

}
