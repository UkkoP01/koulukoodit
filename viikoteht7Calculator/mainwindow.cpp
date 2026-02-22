#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << "alkutila" << tila;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_plus_clicked()
{
    if(tila == 2) {
        qDebug() << "Tlaa " << tila << " plus sallittu";
        //haetaan num1
        QString n1 = ui->num1->text();
        num1 = n1.toInt();
        //haetaan num2
        QString n2 = ui->num2->text();
        num2 = n2.toInt();
        qDebug() << " + " << num2;
        //lasketaan tulos
        result = num1 + num2;
        //kirjoitetaan tulos edittiin
        QString r = QString::number(result);
        ui->result->setText(r);
        //palautetaan lukuun 0
        tila = 0;
    }
}


void MainWindow::on_miinus_clicked()
{
    if(tila == 2) {
        qDebug() << "Tlaa " << tila << " miinus sallittu";
        //haetaan num1
        QString n1 = ui->num1->text();
        num1 = n1.toInt();
        //haetaan num2
        QString n2 = ui->num2->text();
        num2 = n2.toInt();
        qDebug() << " - " << num2;
        //lasketaan tulos
        result = num1 - num2;
        //kirjoitetaan tulos edittiin
        QString r = QString::number(result);
        ui->result->setText(r);
        //palautetaan lukuun 0
        tila = 0;
        qDebug() << "nykyinen tila" << tila;
    }
}


void MainWindow::on_kerro_clicked()
{
    if(tila == 2) {
        qDebug() << "Tlaa " << tila << " miinus sallittu";
        //haetaan num1
        QString n1 = ui->num1->text();
        num1 = n1.toInt();
        //haetaan num2
        QString n2 = ui->num2->text();
        num2 = n2.toInt();
        qDebug() << " * " << num2;
        //lasketaan tulos
        result = num1 * num2;
        //kirjoitetaan tulos edittiin
        QString r = QString::number(result);
        ui->result->setText(r);
        //palautetaan lukuun 0
        tila = 0;
        qDebug() << "nykyinen tila" << tila;
    }
}


void MainWindow::on_jaa_clicked()
{
    if(tila == 2) {
        qDebug() << "Tlaa " << tila << " miinus sallittu";
        //haetaan num1
        QString n1 = ui->num1->text();
        num1 = n1.toInt();
        //haetaan num2
        QString n2 = ui->num2->text();
        num2 = n2.toInt();
        qDebug() << " / " << num2;
        //lasketaan tulos
        result = num1 / num2;
        //kirjoitetaan tulos edittiin
        QString r = QString::number(result);
        ui->result->setText(r);
        //palautetaan lukuun 0
        tila = 0;
        qDebug() << "nykyinen tila" << tila;
    }
}


void MainWindow::on_n1_clicked()
{
    //num1 = 1;
    //ui->yksiEdit->setText(QString::number(num1));
    setEditNum(1);
}


void MainWindow::on_n2_clicked()
{
    //num2 = 2;
    //ui->kaksiEdit->setText(QString::number(num2));
    setEditNum(2);
}


void MainWindow::on_n3_clicked()
{
    //num3 = 3;
    //ui->kolmeEdit->setText(QString::number(num3));
    setEditNum(3);
}


void MainWindow::on_n4_clicked()
{
    setEditNum(4);
}


void MainWindow::on_n5_clicked()
{
    setEditNum(5);
}


void MainWindow::on_n6_clicked()
{
    setEditNum(6);
}


void MainWindow::on_n7_clicked()
{
    setEditNum(7);
}


void MainWindow::on_n8_clicked()
{
    setEditNum(8);
}


void MainWindow::on_n9_clicked()
{
    setEditNum(9);
}


void MainWindow::on_n0_clicked()
{
    setEditNum(0);
}


void MainWindow::setEditNum(int num) {
    if(tila == 0) {
        QString lukunyt = ui->num1->text();
        lukunyt = lukunyt + QString::number(num);
        ui->num1->setText(lukunyt);
        qDebug() << "tila 0: Kirjoitetaan num1";
    }
    else if(tila == 1) {
        QString lukunyt = ui->num2->text();
        lukunyt = lukunyt + QString::number(num);
        ui->num2->setText(lukunyt);
        qDebug() << "tila 1: Kirjoitetaan num2";
    }
}


void MainWindow::on_enterButton_clicked()
{
    qDebug() << "nykyinen tila";
    //tila 0 -> tilaan 1
    if(tila == 0) {
        tila = 1;
    }
    //tila 1 -> tillan 0
    else if(tila == 1) {
        tila = 2;
    }
    qDebug() << "uusitila";
}


void MainWindow::on_clearButton_clicked()
{
   ui->num1->clear();
    ui->num2->clear();
    //clearista aina alkutilaan
    tila = 0;
}
