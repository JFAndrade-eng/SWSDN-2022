#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QThread>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPalette sample_palette;
    sample_palette.setColor(QPalette::Window, Qt::black);
    sample_palette.setColor(QPalette::WindowText, Qt::blue);
    sample_palette.setColor(QPalette::Button, Qt::darkGray);
    sample_palette.setColor(QPalette::ButtonText, Qt::blue);
    this->setPalette(sample_palette);
    serial = new QSerialPort(this);
    connect(serial, static_cast<void (QSerialPort::*)(QSerialPort::SerialPortError)>(&QSerialPort::error),
            this, &MainWindow::handleError);

    connect(serial, &QSerialPort::readyRead, this, &MainWindow::readData);
    //    MainWindow::port.setPortName("/dev/ttyUSB0");
    //    MainWindow::port.setBaudRate(115200);
    //    MainWindow::port.setDataBits(QSerialPort::Data8);
    //    MainWindow::port.setParity(QSerialPort::NoParity);
    //    MainWindow::port.setStopBits(QSerialPort::OneStop);
    //    MainWindow::port.setFlowControl(QSerialPort::NoFlowControl);
    //    MainWindow::port.open(QIODevice::WriteOnly);
    serial->setPortName("/dev/ttyUSB0");
    serial->setBaudRate(115200);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);
    MainWindow::step = 0;
}

void MainWindow::writeData(const QByteArray &data)
{
    serial->write(data);
}

void MainWindow::readData()
{
    QByteArray data = serial->readAll();
    qDebug(data.toStdString().c_str());
}

void MainWindow::handleError(QSerialPort::SerialPortError error)
{
//    if (error == QSerialPort::ResourceError) {
//        QMessageBox::critical(this, tr("Critical Error"), serial->errorString());
//        closeSerialPort();
//    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_bt_fade_slow_clicked()
{
    serial->write("{\"effect\":3,\"speed\":1}");
    qDebug("{\"effect\":3,\"speed\":1}");
}

void MainWindow::on_bt_fade_med_clicked()
{
    serial->write("{\"effect\":3,\"speed\":10}");
    qDebug("{\"effect\":3,\"speed\":10}");
}

void MainWindow::on_bt_flash_med_clicked()
{
    serial->write("{\"effect\":5,\"speed\":500}");
    qDebug("{\"effect\":5,\"speed\":500}");
}

void MainWindow::on_bt_flash_fast_clicked()
{
    serial->write("{\"effect\":5,\"speed\":200}");
    qDebug("{\"effect\":5,\"speed\":200}");
}

void MainWindow::on_bt_flash_strobe_clicked()
{
    serial->write("{\"effect\":5,\"speed\":40}");
    qDebug("{\"effect\":5,\"speed\":40}");
}

void MainWindow::on_bt_rainbow_slow_clicked()
{
    serial->write("{\"effect\":9,\"speed\":1}");
    qDebug("{\"effect\":9,\"speed\":1}");
}

void MainWindow::on_bt_rainbow_med_clicked()
{
    serial->write("{\"effect\":9,\"speed\":3}");
    qDebug("{\"effect\":9,\"speed\":3}");
}

void MainWindow::on_bt_step_up_clicked()
{
    MainWindow::step += 1;
    if(MainWindow::step > 16){
        MainWindow::step = 16;
    }
    ui->lcd_step->display(MainWindow::step);
    std::string s = "{\"step\":"+std::to_string(MainWindow::step)+"}";
    serial->write(s.c_str());
    qDebug(s.c_str());
}

void MainWindow::on_bt_setp_down_clicked()
{
    MainWindow::step -= 1;
    if(MainWindow::step < 0){
        MainWindow::step = 0;
    }
    ui->lcd_step->display(MainWindow::step);
    std::string s = "{\"step\":"+std::to_string(MainWindow::step)+"}";
    serial->write(s.c_str());
    qDebug(s.c_str());
}

void MainWindow::on_bt_off_clicked()
{
    serial->write("{\"effect\":0,\"speed\":0}");
    ui->lcd_step->display(0);
    MainWindow::step = 0;
    qDebug("{\"effect\":0,\"speed\":0}");
}

void MainWindow::on_bt_r_clicked()
{
    serial->write("{\"effect\":6,\"speed\":40,\"rgb\":\"#FF0000\"}");
    qDebug("{\"effect\":6,\"speed\":40,\"rgb\":\"#FF0000\"}");
}

void MainWindow::on_bt_g_clicked()
{
    serial->write("{\"effect\":10,\"speed\":40,\"rgb\":\"#00FF00\"}");
    qDebug("{\"effect\":10,\"speed\":40,\"rgb\":\"#00FF00\"}");
}

void MainWindow::on_bt_b_clicked()
{
    serial->write("{\"effect\":10,\"speed\":5,\"rgb\":\"#0000FF\"}");
    qDebug("{\"effect\":10,\"speed\":5,\"rgb\":\"#0000FF\"}");
}

void MainWindow::on_bt_step_0_clicked()
{
    serial->write("{\"step\":0}");
    ui->lcd_step->display(0);
    MainWindow::step = 0;
    qDebug("{\"step\":0}");
}

void MainWindow::on_bt_step_1_clicked()
{
    serial->write("{\"step\":1}");
    qDebug("{\"step\":1}");
}

void MainWindow::on_bt_step_2_clicked()
{
    serial->write("{\"step\":2}");
    qDebug("{\"step\":2}");
}

void MainWindow::on_bt_step_3_clicked()
{
    serial->write("{\"step\":3}");
    qDebug("{\"step\":3}");
}

void MainWindow::on_bt_step_4_clicked()
{
    serial->write("{\"step\":4}");
    qDebug("{\"step\":4}");
}

void MainWindow::on_bt_step_5_clicked()
{
    serial->write("{\"step\":5}");
    qDebug("{\"step\":5}");
}

void MainWindow::on_bt_step_6_clicked()
{
    serial->write("{\"step\":6}");
    qDebug("{\"step\":6}");
}

void MainWindow::on_bt_step_7_clicked()
{
    serial->write("{\"step\":7}");
    qDebug("{\"step\":7}");
}

void MainWindow::on_bt_step_8_clicked()
{
    serial->write("{\"step\":8}");
    qDebug("{\"step\":8}");
}

void MainWindow::on_bt_step_9_clicked()
{
    serial->write("{\"step\":9}");
    qDebug("{\"step\":9}");
}

void MainWindow::on_bt_step_10_clicked()
{
    serial->write("{\"step\":10}");
    qDebug("{\"step\":10}");
}

void MainWindow::on_bt_step_11_clicked()
{
    serial->write("{\"step\":11}");
    qDebug("{\"step\":11}");
}

void MainWindow::on_bt_step_12_clicked()
{
    serial->write("{\"step\":12}");
    qDebug("{\"step\":12}");
}

void MainWindow::on_bt_step_13_clicked()
{
    serial->write("{\"step\":13}");
    qDebug("{\"step\":13}");
}

void MainWindow::on_bt_step_14_clicked()
{
    serial->write("{\"step\":14}");
    qDebug("{\"step\":14}");
}

void MainWindow::on_bt_step_15_clicked()
{
    serial->write("{\"step\":15}");
    qDebug("{\"step\":15}");
}

void MainWindow::on_bt_step_16_clicked()
{
    serial->write("{\"step\":16}");
    ui->lcd_step->display(16);
    MainWindow::step = 16;
    qDebug("{\"step\":16}");
}

void MainWindow::on_pushButton_clicked()
{
//    serial->write("{\"step\":0}");
//    qDebug("{\"step\":0}");
//    QThread::msleep(1000);
//    serial->write("{\"effect\":0,\"speed\":0}");
//    qDebug("{\"effect\":0,\"speed\":0}");
//    QThread::msleep(1000);
//    serial->write("{\"effect\":9,\"speed\":3,\"step\":0}");
//    qDebug("{\"effect\":9,\"speed\":3,\"step\":0}");

//    ui->lcd_step->display(0);
//    MainWindow::step = 0;
}
