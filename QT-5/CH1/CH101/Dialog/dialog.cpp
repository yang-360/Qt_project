#include "dialog.h"
#include "ui_dialog.h"
//静态变量
const static double PI=3.1416;
//构造函数，子类调用父类构造
Dialog::Dialog(QWidget *parent) : QDialog(parent), ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
//单击按钮事件
void Dialog::on_countBtn_clicked()
{
    bool ok;
    QString tempStr;
    //文本框取值
    QString valueStr=ui->radiusLineEdit->text();
    //QString转int
    int valueInt=valueStr.toInt(&ok);
    double area=valueInt*valueInt*PI;//计算圆面积
    //double转QString
    ui->areaLabel_2->setText(tempStr.setNum(area));
}

//文本框修改事件
void Dialog::on_radiusLineEdit_textChanged(const QString &arg1)
{
    bool ok;
    QString tempStr;
     //文本框取值
    QString valueStr=ui->radiusLineEdit->text();
    //QString转int
    int valueInt=valueStr.toInt(&ok);
    double area=valueInt*valueInt*PI;//计算圆面积
    //double转QString
    ui->areaLabel_2->setText(tempStr.setNum(area));
}
