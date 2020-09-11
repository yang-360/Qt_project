#include "mywidget.h"
#include <qapplication.h>
#include <qpushbutton.h>
#include <qfont.h>
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
	//设置窗体最大最小
    setMinimumSize( 200, 120 );
    setMaximumSize( 200, 120 );
	
    QPushButton *quit = new QPushButton( "Quit", this);//创建按钮控件
    
	quit->setGeometry( 62, 40, 75, 30 );//设置窗体大小
    
	quit->setFont( QFont( "Times", 18, QFont::Bold ) );//设置字体
    
	connect( quit, SIGNAL(clicked()), qApp, SLOT(quit()) );//单击退出事件
}

MyWidget::~MyWidget()
{

}
