#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//#include <QMainWindow>
#include <QTextStream>
//#include <QSerialPort>
#include <QtSerialPort/QSerialPort>
#include <QLCDNumber>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //int step;
    //QSerialPort port;

private slots:
    void on_bt_fade_slow_clicked();

    void on_bt_fade_med_clicked();

    void on_bt_flash_med_clicked();

    void on_bt_flash_fast_clicked();

    void on_bt_flash_strobe_clicked();

    void on_bt_rainbow_slow_clicked();

    void on_bt_rainbow_med_clicked();

    void on_bt_step_up_clicked();

    void on_bt_setp_down_clicked();

    void on_bt_off_clicked();

    void on_bt_r_clicked();

    void on_bt_g_clicked();

    void on_bt_b_clicked();

    void on_bt_step_0_clicked();

    void on_bt_step_1_clicked();

    void on_bt_step_2_clicked();

    void on_bt_step_3_clicked();

    void on_bt_step_4_clicked();

    void on_bt_step_5_clicked();

    void on_bt_step_6_clicked();

    void on_bt_step_7_clicked();

    void on_bt_step_8_clicked();

    void on_bt_step_9_clicked();

    void on_bt_step_10_clicked();

    void on_bt_step_11_clicked();

    void on_bt_step_12_clicked();

    void on_bt_step_13_clicked();

    void on_bt_step_14_clicked();

    void on_bt_step_15_clicked();

    void on_bt_step_16_clicked();

    void writeData(const QByteArray &data);
    void readData();

    void handleError(QSerialPort::SerialPortError error);

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    int step;
    QSerialPort *serial;
//    QSerialPort port;
};
#endif // MAINWINDOW_H
