#ifndef INPUTDLG_H
#define INPUTDLG_H

#include <QWidget>
#include<QDialog>
#include<QLabel>
#include<QGridLayout>
#include<QPushButton>
#include <QInputDialog>
class inputdlg : public QDialog
{
    Q_OBJECT
public:
    explicit inputdlg(QWidget *parent = nullptr);

private slots:
    void ChangeName();
    void ChangeSex();
    void ChangeAge();
    void ChangeScore();
private:
    QLabel *nameLabel1;
    QLabel *sexLabel1;
    QLabel *ageLabel1;
    QLabel *scoreLabel1;
    QLabel *nameLabel2;
    QLabel *sexLabel2;
    QLabel *ageLabel2;
    QLabel *scoreLabel2;
    QPushButton *nameBtn;
    QPushButton *sexBtn;
    QPushButton *ageBtn;
    QPushButton *scoreBtn;
    QGridLayout *mainLayout;

};

#endif // INPUTDLG_H
