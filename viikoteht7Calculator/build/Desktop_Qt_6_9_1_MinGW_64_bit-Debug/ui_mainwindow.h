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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *nro1;
    QLabel *nro2;
    QLabel *tulos;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *n1;
    QPushButton *n2;
    QPushButton *n3;
    QPushButton *plus;
    QPushButton *n4;
    QPushButton *n5;
    QPushButton *n6;
    QPushButton *miinus;
    QPushButton *n7;
    QPushButton *n8;
    QPushButton *n9;
    QPushButton *kerro;
    QPushButton *n0;
    QPushButton *clearButton;
    QPushButton *enterButton;
    QPushButton *jaa;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        nro1 = new QLabel(centralwidget);
        nro1->setObjectName("nro1");
        nro1->setGeometry(QRect(50, 20, 51, 16));
        nro2 = new QLabel(centralwidget);
        nro2->setObjectName("nro2");
        nro2->setGeometry(QRect(250, 20, 51, 16));
        tulos = new QLabel(centralwidget);
        tulos->setObjectName("tulos");
        tulos->setGeometry(QRect(390, 20, 61, 16));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(40, 50, 113, 20));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(220, 50, 113, 20));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(370, 50, 113, 20));
        n1 = new QPushButton(centralwidget);
        n1->setObjectName("n1");
        n1->setGeometry(QRect(40, 90, 80, 18));
        n2 = new QPushButton(centralwidget);
        n2->setObjectName("n2");
        n2->setGeometry(QRect(140, 90, 80, 18));
        n3 = new QPushButton(centralwidget);
        n3->setObjectName("n3");
        n3->setGeometry(QRect(240, 90, 80, 18));
        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");
        plus->setGeometry(QRect(350, 90, 80, 18));
        n4 = new QPushButton(centralwidget);
        n4->setObjectName("n4");
        n4->setGeometry(QRect(40, 130, 80, 18));
        n5 = new QPushButton(centralwidget);
        n5->setObjectName("n5");
        n5->setGeometry(QRect(140, 130, 80, 18));
        n6 = new QPushButton(centralwidget);
        n6->setObjectName("n6");
        n6->setGeometry(QRect(240, 130, 80, 18));
        miinus = new QPushButton(centralwidget);
        miinus->setObjectName("miinus");
        miinus->setGeometry(QRect(350, 130, 80, 18));
        n7 = new QPushButton(centralwidget);
        n7->setObjectName("n7");
        n7->setGeometry(QRect(40, 170, 80, 18));
        n8 = new QPushButton(centralwidget);
        n8->setObjectName("n8");
        n8->setGeometry(QRect(140, 170, 80, 18));
        n9 = new QPushButton(centralwidget);
        n9->setObjectName("n9");
        n9->setGeometry(QRect(250, 170, 80, 18));
        kerro = new QPushButton(centralwidget);
        kerro->setObjectName("kerro");
        kerro->setGeometry(QRect(350, 170, 80, 18));
        n0 = new QPushButton(centralwidget);
        n0->setObjectName("n0");
        n0->setGeometry(QRect(40, 210, 80, 18));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName("clearButton");
        clearButton->setGeometry(QRect(140, 210, 80, 18));
        enterButton = new QPushButton(centralwidget);
        enterButton->setObjectName("enterButton");
        enterButton->setGeometry(QRect(250, 210, 80, 18));
        jaa = new QPushButton(centralwidget);
        jaa->setObjectName("jaa");
        jaa->setGeometry(QRect(360, 210, 80, 18));
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
        nro1->setText(QCoreApplication::translate("MainWindow", "numero1", nullptr));
        nro2->setText(QCoreApplication::translate("MainWindow", "numero2", nullptr));
        tulos->setText(QCoreApplication::translate("MainWindow", "tulos", nullptr));
        n1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        n2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        n3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        n4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        n5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        n6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        miinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        n7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        n8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        n9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        kerro->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        n0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        clearButton->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        enterButton->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        jaa->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
