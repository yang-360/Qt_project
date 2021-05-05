#ifndef PALETTE_H
#define PALETTE_H

#include <QWidget>
#include<QDialog>
#include <QComboBox>
#include <QLabel>
#include <QTextEdit>
#include <QPushButton>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QGridLayout>
class palette : public QDialog
{
    Q_OBJECT
public:
    explicit palette(QWidget *parent = nullptr);

    void createCtrlFrame();			//完成窗体左半部分颜色选择区的创建
    void createContentFrame();		//完成窗体右半部分的创建
    void fillColorList(QComboBox *);
                                    //完成向颜色下拉列表框中插入颜色的工作
private slots:
    void ShowWindow();
    void ShowWindowText();
    void ShowButton();
    void ShowButtonText();
    void ShowBase();
private:
    QFrame *ctrlFrame;                  //颜色选择面板
    QLabel *windowLabel;
    QComboBox *windowComboBox;
    QLabel *windowTextLabel;
    QComboBox *windowTextComboBox;
    QLabel *buttonLabel;
    QComboBox *buttonComboBox;
    QLabel *buttonTextLabel;
    QComboBox *buttonTextComboBox;
    QLabel *baseLabel;
    QComboBox *baseComboBox;
    QFrame *contentFrame;              	//具体显示面板
    QLabel *label1;
    QComboBox *comboBox1;
    QLabel *label2;
    QLineEdit *lineEdit2;
    QTextEdit *textEdit;
    QPushButton *OkBtn;
    QPushButton *CancelBtn;

};

#endif // PALETTE_H
