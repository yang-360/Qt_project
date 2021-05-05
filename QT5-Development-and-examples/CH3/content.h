#ifndef CONTENT_H
#define CONTENT_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include"baseinfo.h"
#include"contact.h"
#include"detail.h"
#include<QHBoxLayout>
class content : public QFrame
{
    Q_OBJECT
public:
    explicit content(QWidget *parent = nullptr);
    QStackedWidget *stack;
    QPushButton *AmendBtn;
    QPushButton *CloseBtn;

signals:

};

#endif // CONTENT_H
