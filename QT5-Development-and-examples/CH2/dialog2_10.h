#ifndef DIALOG2_10_H
#define DIALOG2_10_H

#include <QDialog>

namespace Ui {
class Dialog2_10;
}

class Dialog2_10 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2_10(QWidget *parent = nullptr);
    ~Dialog2_10();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::Dialog2_10 *ui;
};

#endif // DIALOG2_10_H
