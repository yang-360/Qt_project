#include "ch1_2dialog.h"

ch1_2dialog::ch1_2dialog(QWidget *parent):QDialog(parent)
{
    label_radius = new QLabel(this);
    label_radius->setText(tr("半径"));

    label_result = new QLabel(this);
    label_result->setText(tr("结果"));

    lineEdit_radius = new QLineEdit(this);
    lineEdit_result = new QLineEdit(this);

    start = new QPushButton(this);
    start ->setText(tr("计算"));

    QGridLayout * layout = new QGridLayout(this);
    layout->addWidget(label_radius,0,0);
    layout->addWidget(lineEdit_radius,0,1);
    layout->addWidget(label_result,1,0);
    layout->addWidget(lineEdit_result,1,1);
    layout->addWidget(start,2,1);
    connect(start,SIGNAL(clicked()),this,SLOT(showArea()));
    connect(lineEdit_radius,SIGNAL(textChanged(QString)),this,SLOT(showArea()));
}

ch1_2dialog::~ch1_2dialog(){}

void ch1_2dialog::showArea()
{
    bool ok;
    QString tempStr;

    QString valueStr=lineEdit_radius->text();

    int valueInt=valueStr.toInt(&ok);

    double area=valueInt*valueInt*PU;

    lineEdit_result->setText(tempStr.setNum(area));

}
