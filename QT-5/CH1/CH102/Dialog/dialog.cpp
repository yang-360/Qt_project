#include "dialog.h"
#include <QGridLayout>
//静态圆周率
const static double PI=3.1416;
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    label1=new QLabel(this);
    //设置标签名
    label1->setText(tr("请输入圆的半径："));
    //创建对象
    lineEdit=new QLineEdit(this);
    label2=new QLabel(this);
    button=new QPushButton(this);
    //设置显示标题
    button->setText(tr("显示对应圆的面积"));
    //网格布局
    QGridLayout *mainLayout=new QGridLayout(this);
    mainLayout->addWidget(label1,0,0);
    mainLayout->addWidget(lineEdit,0,1);
    mainLayout->addWidget(label2,1,0);
    mainLayout->addWidget(button,1,1);
    //单击按钮事件信号
    //connect(button,SIGNAL(clicked()),this,SLOT(showArea()));
    //窗体改变事件信号
    connect(lineEdit,SIGNAL(textChanged(QString)),this,SLOT(showArea()));
}

void Dialog::showArea()
{
    bool ok;
    QString tempStr;
    //获取文本
    QString valueStr=lineEdit->text();
    //类型转换
    int valueInt=valueStr.toInt(&ok);
    double area=valueInt*valueInt*PI;
    //转换显示
    label2->setText(tempStr.setNum(area));
}

Dialog::~Dialog()
{

}
