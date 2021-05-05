#ifndef MSGBOXDLG_H
#define MSGBOXDLG_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QGridLayout>
#include <QDialog>
class msgboxdlg : public QDialog
{
    Q_OBJECT
public:
    explicit msgboxdlg(QWidget *parent = nullptr);

private slots:
    void showQuestionMsg();
    void showInformationMsg();
    void showWarningMsg();
    void showCriticalMsg();
    void showAboutMsg();
    void showAboutQtMsg();
private:
    QLabel *label;
    QPushButton *questionBtn;
    QPushButton *informationBtn;
    QPushButton *warningBtn;
    QPushButton *criticalBtn;
    QPushButton *aboutBtn;
    QPushButton *aboutQtBtn;
    QGridLayout *mainLayout;

};

#endif // MSGBOXDLG_H
