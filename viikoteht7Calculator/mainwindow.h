#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

    void setEditNum(int num);

private slots:
    void on_plus_clicked();

    void on_miinus_clicked();

    void on_n1_clicked();

    void on_n2_clicked();

    void on_n3_clicked();

    void on_enterButton_clicked();

    void on_clearButton_clicked();

    void on_n4_clicked();

    void on_n5_clicked();

    void on_n6_clicked();

    void on_n7_clicked();

    void on_n8_clicked();

    void on_n9_clicked();

    void on_n0_clicked();

    void on_kerro_clicked();

    void on_jaa_clicked();

private:
    Ui::MainWindow *ui;

    int num1;
    int num2;
    int num3;
    int result;

    int tila = 0;
};
#endif // MAINWINDOW_H
