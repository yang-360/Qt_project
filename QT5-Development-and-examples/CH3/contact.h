#ifndef CONTACT_H
#define CONTACT_H

#include <QWidget>
#include <QLabel>
#include <QGridLayout>
#include <QLineEdit>
#include <QCheckBox>
class contact : public QWidget
{
    Q_OBJECT
public:
    explicit contact(QWidget *parent = nullptr);

signals:
private:
    QLabel *EmailLabel;
    QLineEdit *EmailLineEdit;
    QLabel *AddrLabel;
    QLineEdit *AddrLineEdit;
    QLabel *CodeLabel;
    QLineEdit *CodeLineEdit;
    QLabel *MoviTelLabel;
    QLineEdit *MoviTelLineEdit;
    QCheckBox *MoviTelCheckBook;
    QLabel *ProTelLabel;
    QLineEdit *ProTelLineEdit;
    QGridLayout *mainLayout;
};

#endif // CONTACT_H
