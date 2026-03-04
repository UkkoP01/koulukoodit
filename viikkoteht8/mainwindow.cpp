#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->start->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
    if(pQTimer){
    pQTimer->stop();
    delete pQTimer;
    pQTimer = nullptr;
   }
}

void MainWindow::on_pl1_clicked(){
    currentPlayer = 2;

}

void MainWindow::on_pl2_clicked(){
    currentPlayer = 1;

}

void MainWindow::on_sec_clicked(){
    gameTime = 120;

    qDebug() << gameTime;

    ui->start->setEnabled(true);
    ui->pt1->setRange(0, gameTime);
    ui->pt2->setRange(0, gameTime);
    ui->pt1->setValue(gameTime);
    ui->pt2->setValue(gameTime);

    setGameInfoText("valamis");
}

void MainWindow::on_min_clicked(){
    gameTime = 300;

    qDebug() << gameTime;

    ui->start->setEnabled(true);
    ui->pt1->setRange(0, gameTime);
    ui->pt2->setRange(0, gameTime);
    ui->pt1->setValue(gameTime);
    ui->pt2->setValue(gameTime);

    setGameInfoText("valamis");
}

void MainWindow::on_start_clicked(){
    player1Time = gameTime;
    player2Time = gameTime;
    currentPlayer = 1;


    qDebug() << "ajaksi valittu " << gameTime;

    pQTimer = new QTimer(this);

    connect(pQTimer, &QTimer::timeout, this, &MainWindow::updateProgressBar);
    pQTimer->setInterval(1000);
    pQTimer->start();

    qDebug() << "aika alkoi";
    setGameInfoText("peli kaynnissa");

}

void MainWindow::on_stop_clicked(){
    if(pQTimer){
        pQTimer->stop();
        delete pQTimer;
        pQTimer = nullptr;
        qDebug() << "ajastin pysaytetty, peli loppuu";
    }
    ui->sec->setEnabled(true);
    ui->min->setEnabled(true);
    player1Time = 0;
    player2Time = 0;

}

void MainWindow::updateProgressBar(){
    if(currentPlayer == 1){
        player1Time = player1Time-1;
        ui->pt1->setValue(player1Time);

        if(player1Time == 0){
            pQTimer->stop();
            delete pQTimer;
            pQTimer = nullptr;

            ui->sec->setEnabled(true);
            ui->min->setEnabled(true);

            setGameInfoText("pellaaja 2 voitti");
        }
    }
    else if(currentPlayer == 2){
        player2Time = player2Time-1;
        ui->pt2->setValue(player2Time);

        if(player2Time == 0){
            pQTimer->stop();
            delete pQTimer;
            pQTimer = nullptr;

            ui->sec->setEnabled(true);
            ui->min->setEnabled(true);

            setGameInfoText("pellaaja 1 voitti");
        }
    }
}

void MainWindow::setGameInfoText(QString label){
    ui->label->setText(label);
}
