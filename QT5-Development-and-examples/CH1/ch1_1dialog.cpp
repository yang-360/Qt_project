#include "ch1_1dialog.h"
#include "ui_ch1_1dialog.h"

CH1_1Dialog::CH1_1Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CH1_1Dialog)
{
    ui->setupUi(this);
}

CH1_1Dialog::~CH1_1Dialog()
{
    delete ui;
}

void CH1_1Dialog::on_startButton_clicked()
{
    bool ok;
    QString tempStr;
    QString valueStr = ui->lineEdit_radius->text();
    int valueInt = valueStr.toInt(&ok);
    double area =  valueInt*valueInt*PI;
    ui->lineEdit_result->setText(tempStr.setNum(area));
}

void CH1_1Dialog::on_lineEdit_radius_textChanged(const QString &arg1)
{
    bool ok;
    QString tempStr;
    QString valueStr = ui->lineEdit_radius->text();
    int valueInt = valueStr.toInt(&ok);
    double area =  valueInt*valueInt*PI;
    ui->lineEdit_result->setText(tempStr.setNum(area));

}
