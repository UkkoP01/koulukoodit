#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_pl1_clicked();
    void on_pl2_clicked();
    void on_sec_clicked();
    void on_min_clicked();
    void on_start_clicked();
    void on_stop_clicked();



private:
    Ui::MainWindow *ui;

    void updateProgressBar();
    void setGameInfoText(QString label);


    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    QTimer *pQTimer = nullptr;
};
#endif // MAINWINDOW_H
