#ifndef EXTENSIONDLG_H
#define EXTENSIONDLG_H

#include <QWidget>
#include<QDialog>
class extensiondlg : public QDialog
{
    Q_OBJECT
public:
    explicit extensiondlg(QWidget *parent = nullptr);

private slots:
    void showDetailInfo();
private:
    void createBaseInfo();           		//实现基本对话窗体部分
    void createDetailInfo();            	//实现扩展窗体部分
    QWidget *baseWidget;                  	//基本对话窗体部分
    QWidget *detailWidget;            		//扩展窗体部分

};

#endif // EXTENSIONDLG_H
