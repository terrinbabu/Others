#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->pushButton->setStyleSheet("QPushButton{ background-color: green }");
    }
    else
    {
        ui->pushButton->setStyleSheet("QPushButton{ background-color: red }");
    }
}
