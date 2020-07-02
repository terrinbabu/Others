/********************************************************************************
** Form generated from reading UI file 'kinova_voice_control.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KINOVA_VOICE_CONTROL_H
#define UI_KINOVA_VOICE_CONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kinova_voice_control
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *kinova_voice_control)
    {
        if (kinova_voice_control->objectName().isEmpty())
            kinova_voice_control->setObjectName(QString::fromUtf8("kinova_voice_control"));
        kinova_voice_control->resize(385, 326);
        centralWidget = new QWidget(kinova_voice_control);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(90, 30, 191, 71));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 150, 191, 71));
        kinova_voice_control->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(kinova_voice_control);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 385, 22));
        kinova_voice_control->setMenuBar(menuBar);
        mainToolBar = new QToolBar(kinova_voice_control);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        kinova_voice_control->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(kinova_voice_control);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        kinova_voice_control->setStatusBar(statusBar);

        retranslateUi(kinova_voice_control);

        QMetaObject::connectSlotsByName(kinova_voice_control);
    } // setupUi

    void retranslateUi(QMainWindow *kinova_voice_control)
    {
        kinova_voice_control->setWindowTitle(QApplication::translate("kinova_voice_control", "kinova_voice_control", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("kinova_voice_control", "START", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("kinova_voice_control", "STOP", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class kinova_voice_control: public Ui_kinova_voice_control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KINOVA_VOICE_CONTROL_H
