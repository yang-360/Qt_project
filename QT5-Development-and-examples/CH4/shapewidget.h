#ifndef SHAPEWIDGET_H
#define SHAPEWIDGET_H

#include <QWidget>

class shapewidget : public QWidget
{
    Q_OBJECT
public:
    explicit shapewidget(QWidget *parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void paintEvent(QPaintEvent *);
private:
    QPoint dragPosition;

};

#endif // SHAPEWIDGET_H
