/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_percentage;
    QPushButton *pushButton_division;
    QPushButton *pushButton_no_9;
    QPushButton *pushButton_no_7;
    QPushButton *pushButton_no_8;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_no_6;
    QPushButton *pushButton_no_4;
    QPushButton *pushButton_no_5;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_no_3;
    QPushButton *pushButton_no_1;
    QPushButton *pushButton_no_2;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_no_0;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_equal;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(241, 361);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 241, 61));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;\n"
""));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(0, 60, 61, 61));
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_plus_minus = new QPushButton(centralWidget);
        pushButton_plus_minus->setObjectName(QString::fromUtf8("pushButton_plus_minus"));
        pushButton_plus_minus->setGeometry(QRect(60, 60, 61, 61));
        pushButton_plus_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_percentage = new QPushButton(centralWidget);
        pushButton_percentage->setObjectName(QString::fromUtf8("pushButton_percentage"));
        pushButton_percentage->setGeometry(QRect(120, 60, 61, 61));
        pushButton_percentage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_division = new QPushButton(centralWidget);
        pushButton_division->setObjectName(QString::fromUtf8("pushButton_division"));
        pushButton_division->setGeometry(QRect(180, 60, 61, 61));
        pushButton_division->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
""));
        pushButton_no_9 = new QPushButton(centralWidget);
        pushButton_no_9->setObjectName(QString::fromUtf8("pushButton_no_9"));
        pushButton_no_9->setGeometry(QRect(120, 120, 61, 61));
        pushButton_no_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_no_7 = new QPushButton(centralWidget);
        pushButton_no_7->setObjectName(QString::fromUtf8("pushButton_no_7"));
        pushButton_no_7->setGeometry(QRect(0, 120, 61, 61));
        pushButton_no_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_no_8 = new QPushButton(centralWidget);
        pushButton_no_8->setObjectName(QString::fromUtf8("pushButton_no_8"));
        pushButton_no_8->setGeometry(QRect(60, 120, 61, 61));
        pushButton_no_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_multiply = new QPushButton(centralWidget);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));
        pushButton_multiply->setGeometry(QRect(180, 120, 61, 61));
        pushButton_multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
""));
        pushButton_no_6 = new QPushButton(centralWidget);
        pushButton_no_6->setObjectName(QString::fromUtf8("pushButton_no_6"));
        pushButton_no_6->setGeometry(QRect(120, 180, 61, 61));
        pushButton_no_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_no_4 = new QPushButton(centralWidget);
        pushButton_no_4->setObjectName(QString::fromUtf8("pushButton_no_4"));
        pushButton_no_4->setGeometry(QRect(0, 180, 61, 61));
        pushButton_no_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_no_5 = new QPushButton(centralWidget);
        pushButton_no_5->setObjectName(QString::fromUtf8("pushButton_no_5"));
        pushButton_no_5->setGeometry(QRect(60, 180, 61, 61));
        pushButton_no_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(180, 180, 61, 61));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
""));
        pushButton_no_3 = new QPushButton(centralWidget);
        pushButton_no_3->setObjectName(QString::fromUtf8("pushButton_no_3"));
        pushButton_no_3->setGeometry(QRect(120, 240, 61, 61));
        pushButton_no_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_no_1 = new QPushButton(centralWidget);
        pushButton_no_1->setObjectName(QString::fromUtf8("pushButton_no_1"));
        pushButton_no_1->setGeometry(QRect(0, 240, 61, 61));
        pushButton_no_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_no_2 = new QPushButton(centralWidget);
        pushButton_no_2->setObjectName(QString::fromUtf8("pushButton_no_2"));
        pushButton_no_2->setGeometry(QRect(60, 240, 61, 61));
        pushButton_no_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));
        pushButton_plus->setGeometry(QRect(180, 240, 61, 61));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
""));
        pushButton_no_0 = new QPushButton(centralWidget);
        pushButton_no_0->setObjectName(QString::fromUtf8("pushButton_no_0"));
        pushButton_no_0->setGeometry(QRect(0, 300, 121, 61));
        pushButton_no_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_decimal = new QPushButton(centralWidget);
        pushButton_decimal->setObjectName(QString::fromUtf8("pushButton_decimal"));
        pushButton_decimal->setGeometry(QRect(120, 300, 61, 61));
        pushButton_decimal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(180, 300, 61, 61));
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_clear->setText(QApplication::translate("MainWindow", "c", nullptr));
        pushButton_plus_minus->setText(QApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_percentage->setText(QApplication::translate("MainWindow", "%", nullptr));
        pushButton_division->setText(QApplication::translate("MainWindow", "/", nullptr));
        pushButton_no_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        pushButton_no_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        pushButton_no_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        pushButton_multiply->setText(QApplication::translate("MainWindow", "x", nullptr));
        pushButton_no_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        pushButton_no_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        pushButton_no_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", nullptr));
        pushButton_no_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        pushButton_no_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        pushButton_no_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_plus->setText(QApplication::translate("MainWindow", "+", nullptr));
        pushButton_no_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_decimal->setText(QApplication::translate("MainWindow", ".", nullptr));
        pushButton_equal->setText(QApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
