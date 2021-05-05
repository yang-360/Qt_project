#ifndef STACKDLG_H
#define STACKDLG_H
#include<QLabel>
#include<QListWidget>
#include<QStackedWidget>
#include <QWidget>

class stackdlg : public QWidget
{
    Q_OBJECT
public:
    explicit stackdlg(QWidget *parent = nullptr);

signals:

private:


};

#endif // STACKDLG_H
