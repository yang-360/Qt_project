#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextEdit>
#include <windows.h>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Splash Example");
    QTextEdit *edit=new QTextEdit;
    edit->setText("Splash Example!");
    setCentralWidget(edit);
    resize(600,450);
    Sleep(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

