#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

//界面命名空间
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    //为了signal和slot机制
    Q_OBJECT

public:
    //explicit用来防止由构造函数定义的隐式转换
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    //单击信号
    void on_countBtn_clicked();
    //文本框编辑改变信号
    void on_radiusLineEdit_textChanged(const QString &arg1);

private:
    //窗口指针
    Ui::Dialog *ui;
};

#endif // DIALOG_H
