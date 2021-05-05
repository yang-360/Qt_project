#ifndef DIALOG_H
#define DIALOG_H

#include <QWidget>
#include<QDialog>
#include<QLineEdit>
#include<QGridLayout>
#include<QLabel>
#include <QGridLayout>
#include <QFileDialog>
#include <QPushButton>
#include <QColorDialog>
#include <QFontDialog>
#include <QMessageBox>
#include"inputdlg.h"
#include"msgboxdlg.h"
class Dialog : public QDialog
{
    Q_OBJECT
public:
    explicit Dialog(QWidget *parent = nullptr);

private:
    QPushButton *fileBtn;
    QLineEdit *fileLineEdit;
    QGridLayout *mainLayout;
    QPushButton *colorBtn;
    QFrame *colorFrame;
    QPushButton *fontBtn;
    QLineEdit *fontLineEdit;
    QPushButton *inputBtn;
    inputdlg *inputDlg;
    QPushButton  *MsgBtn;
    msgboxdlg *msgDlg;
    QPushButton *CustomBtn;
    QLabel *label;
private slots:
    void showFile();
    void showColor();
    void showFont();
    void showInputDlg();
    void showMsgDlg();
    void showCustomDlg();
};

#endif // DIALOG_H
