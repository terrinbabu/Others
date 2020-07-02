#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QDebug>

double firstNum;
bool userIsTypingSecondNum = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_no_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_no_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_no_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_no_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_no_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_no_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_no_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_no_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_no_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_no_9,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_plus_minus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_percentage,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_plus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_minus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_multiply,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_division,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);
    ui->pushButton_division->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_pressed()
{
//    qDebug() << "test";

    QPushButton* button = (QPushButton*)sender();
    double labelNum;
    QString newlabel;

    if((ui->pushButton_plus->isChecked()     ||
       ui->pushButton_minus->isChecked()     ||
       ui->pushButton_multiply->isChecked()  ||
       ui->pushButton_division->isChecked()) &&
       (!userIsTypingSecondNum))
    {
        labelNum = button->text().toDouble();
        userIsTypingSecondNum = true;
        newlabel = QString::number(labelNum,'g',10);
    }
    else
    {
       if (ui->label->text().contains('.') && button->text() == "0")
       {
          newlabel = (ui->label->text() + button->text());
       }
       else
       {
          labelNum = (ui->label->text() + button->text()).toDouble();
          newlabel = QString::number(labelNum,'g',10);
       }
    }

    ui->label->setText(newlabel);
}

void MainWindow::on_pushButton_decimal_released()
{
    ui->label->setText(ui->label->text() + ".");
}

void MainWindow::unary_operation_pressed()
{
    QPushButton* button = (QPushButton*)sender();

    if(button->text() =="+/-")
    {
        double labelNum = (ui->label->text()).toDouble();
        labelNum = labelNum * -1;
        QString newlabel = QString::number(labelNum,'g',10);
        ui->label->setText(newlabel);
    }

    if(button->text() =="%")
    {
        double labelNum = (ui->label->text()).toDouble();
        labelNum = labelNum * 0.01;
        QString newlabel = QString::number(labelNum,'g',10);
        ui->label->setText(newlabel);
    }
}

void MainWindow::on_pushButton_clear_released()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    ui->pushButton_division->setChecked(false);
    userIsTypingSecondNum = false;
    ui->label->setText("0");
}


void MainWindow::on_pushButton_equal_released()
{
    QPushButton* button = (QPushButton*)sender();

    double labelNum,secondNum;
    secondNum = (ui->label->text()).toDouble();
    QString newlabel;

    if(ui->pushButton_plus->isChecked())
    {
        labelNum = firstNum + secondNum;
        newlabel = QString::number(labelNum,'g',10);
        ui->label->setText(newlabel);
        ui->pushButton_plus->setChecked(false);
    }

    else if(ui->pushButton_minus->isChecked())
    {
        labelNum = firstNum - secondNum;
        newlabel = QString::number(labelNum,'g',10);
        ui->label->setText(newlabel);
        ui->pushButton_minus->setChecked(false);
    }

    else if(ui->pushButton_multiply->isChecked())
    {
        labelNum = firstNum * secondNum;
        newlabel = QString::number(labelNum,'g',10);
        ui->label->setText(newlabel);
        ui->pushButton_multiply->setChecked(false);
    }

    else if(ui->pushButton_division->isChecked())
    {
        labelNum = firstNum / secondNum;
        newlabel = QString::number(labelNum,'g',10);
        ui->label->setText(newlabel);
        ui->pushButton_division->setChecked(false);
    }

    userIsTypingSecondNum = false;
}

void MainWindow::binary_operation_pressed()
{
    QPushButton* button = (QPushButton*)sender();

    firstNum = (ui->label->text()).toDouble();
    button -> setCheckable(true);

}
