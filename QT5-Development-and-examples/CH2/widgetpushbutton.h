#ifndef WIDGETPUSHBUTTON_H
#define WIDGETPUSHBUTTON_H
#include<QWidget>
#include<QPushButton>
#include<QFont>
#include<QApplication>
class widgetpushbutton : public QWidget
{
    Q_OBJECT
public:
    widgetpushbutton(QWidget *parent =0);
    ~widgetpushbutton();
};

#endif // WIDGETPUSHBUTTON_H
