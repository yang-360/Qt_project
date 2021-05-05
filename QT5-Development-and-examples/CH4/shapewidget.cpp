#include "shapewidget.h"
#include <QMouseEvent>
#include <QPainter>
#include <QPixmap>
#include <QBitmap>
shapewidget::shapewidget(QWidget *parent) : QWidget(parent)
{
    QPixmap pix;						//新建一个QPixmap对象
    pix.load(":/src/16.png",0,Qt::AvoidDither|Qt::ThresholdDither|Qt::ThresholdAlphaDither);						//(a)
    resize(pix.size());					//(b)
    setMask(QBitmap(pix.mask()));		//(c)
}

void shapewidget::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        dragPosition =event->globalPos()-frameGeometry().topLeft();
        event->accept();
    }
    if(event->button()==Qt::RightButton)
    {
        close();
    }
}

void shapewidget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move(event->globalPos()-dragPosition);
        event->accept();
    }
}

void shapewidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0,QPixmap(":/src/16.png"));
}
