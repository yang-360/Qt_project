#include "widgetpushbutton.h"

widgetpushbutton::widgetpushbutton(QWidget *parent):QWidget(parent)
{
    setMinimumSize(200,200);
    setMaximumSize(200,200);
    QPushButton *quit = new QPushButton("Quit",this);
    quit->setGeometry(62,40,75,30);
    quit->setFont(QFont("Times",18,QFont::Bold));
    connect(quit,SIGNAL(clicked()),qApp,SLOT(quit()));
}

widgetpushbutton::~widgetpushbutton()
{

}
