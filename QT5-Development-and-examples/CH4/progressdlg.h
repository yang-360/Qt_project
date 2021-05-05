#ifndef PROGRESSDLG_H
#define PROGRESSDLG_H

#include <QObject>
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QProgressBar>
#include <QComboBox>
#include <QPushButton>
#include <QGridLayout>
class progressdlg : public QDialog
{
    Q_OBJECT
public:
    explicit progressdlg(QWidget *parent = nullptr);

private slots:
    void startProgress();
private:
    QLabel *FileNum;
    QLineEdit *FileNumLineEdit;
    QLabel *ProgressType;
    QComboBox *comboBox;
    QProgressBar *progressBar;
    QPushButton *starBtn;
    QGridLayout *mainLayout;
};

#endif // PROGRESSDLG_H
