#include "dialog2_10.h"
#include "ui_dialog2_10.h"
#include<QRegExpValidator>
Dialog2_10::Dialog2_10(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2_10)
{
    ui->setupUi(this);

    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");   //正则表达式限制输入字元的范围
    ui->lineEdit->setValidator(new QRegExpValidator(regExp,this));	//(b)
    connect(ui->okButton,SIGNAL(clicked()),this,SLOT(accept()));	//(c)
    connect(ui->cancelButton,SIGNAL(clicked()),this,SLOT(reject()));


}

Dialog2_10::~Dialog2_10()
{
    delete ui;
}

void Dialog2_10::on_lineEdit_textChanged(const QString &arg1)
{
ui->okButton->setEnabled(ui->lineEdit->hasAcceptableInput());
}
