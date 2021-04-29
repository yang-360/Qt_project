#ifndef CH1_2DIALOG_H
#define CH1_2DIALOG_H
#include<QDialog>
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QString>
#include<QGridLayout>
const static double PU=3.1416;
class ch1_2dialog :public QDialog
{
    Q_OBJECT

public:
    ch1_2dialog(QWidget *parent = 0);
    ~ch1_2dialog();

private:
    QLabel *label_radius;
    QLabel *label_result;
    QLineEdit *lineEdit_radius;
    QLineEdit *lineEdit_result;
    QPushButton * start;

public slots:
    void showArea();
};

#endif // CH1_2DIALOG_H
