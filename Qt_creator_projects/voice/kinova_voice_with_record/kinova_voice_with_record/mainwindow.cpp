#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

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

void MainWindow::on_pushButton_start_clicked()
{
        QProcess *proc = new QProcess();
        proc->start("./launch.sh");
}

void MainWindow::on_pushButton_stop_clicked()
{
        QProcess *proc = new QProcess();
        proc->start("killall gnome-terminal-server");
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        ui->pushButton_record->setStyleSheet("QPushButton{background-color:green}");
        QProcess *proc = new QProcess();
        proc->start("./launch_record.sh");
    }
    else
    {
        ui->pushButton_record->setStyleSheet("QPushButton{background-color:red}");
        QProcess *proc = new QProcess();
        proc->start("killall terminator");
    }
}
