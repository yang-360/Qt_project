#ifndef CH1_1DIALOG_H
#define CH1_1DIALOG_H

#include <QDialog>
const static double PI=3.1416;
namespace Ui {
class CH1_1Dialog;
}

class CH1_1Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit CH1_1Dialog(QWidget *parent = nullptr);
    ~CH1_1Dialog();



private slots:
    void on_startButton_clicked();

    void on_lineEdit_radius_textChanged(const QString &arg1);

private:
    Ui::CH1_1Dialog *ui;
};

#endif // CH1_1DIALOG_H
