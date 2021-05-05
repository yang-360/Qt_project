#ifndef SHOWWIDGET_H
#define SHOWWIDGET_H
#include<QLabel>
#include<QTextEdit>
#include <QWidget>

class showwidget : public QWidget
{
    Q_OBJECT
public:
    explicit showwidget(QWidget *parent = nullptr);

//signals:
    QImage img;
    QLabel *imageLabel;
    QTextEdit *text;

};

#endif // SHOWWIDGET_H
