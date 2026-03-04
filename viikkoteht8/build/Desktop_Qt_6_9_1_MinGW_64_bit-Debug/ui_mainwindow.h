/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QProgressBar *pt1;
    QProgressBar *pt2;
    QLabel *label;
    QPushButton *pl1;
    QPushButton *pl2;
    QPushButton *sec;
    QPushButton *min;
    QPushButton *start;
    QPushButton *stop;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pt1 = new QProgressBar(centralwidget);
        pt1->setObjectName("pt1");
        pt1->setGeometry(QRect(50, 50, 118, 23));
        pt1->setValue(24);
        pt2 = new QProgressBar(centralwidget);
        pt2->setObjectName("pt2");
        pt2->setGeometry(QRect(580, 50, 118, 23));
        pt2->setValue(24);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 160, 111, 31));
        pl1 = new QPushButton(centralwidget);
        pl1->setObjectName("pl1");
        pl1->setGeometry(QRect(70, 110, 80, 31));
        pl2 = new QPushButton(centralwidget);
        pl2->setObjectName("pl2");
        pl2->setGeometry(QRect(600, 100, 80, 31));
        sec = new QPushButton(centralwidget);
        sec->setObjectName("sec");
        sec->setGeometry(QRect(240, 210, 80, 18));
        min = new QPushButton(centralwidget);
        min->setObjectName("min");
        min->setGeometry(QRect(410, 210, 80, 18));
        start = new QPushButton(centralwidget);
        start->setObjectName("start");
        start->setGeometry(QRect(280, 300, 80, 51));
        stop = new QPushButton(centralwidget);
        stop->setObjectName("stop");
        stop->setGeometry(QRect(400, 300, 80, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Game ongoing", nullptr));
        pl1->setText(QCoreApplication::translate("MainWindow", "switch player", nullptr));
        pl2->setText(QCoreApplication::translate("MainWindow", "switch player", nullptr));
        sec->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        min->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        start->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        stop->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
