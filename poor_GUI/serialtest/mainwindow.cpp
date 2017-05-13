#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    serial.setPortName(tr("COM3"));
    serial.setBaudRate(QSerialPort::Baud115200,QSerialPort::AllDirections);
    serial.setDataBits(QSerialPort::Data8);
    serial.setFlowControl(QSerialPort::NoFlowControl);
    serial.setParity(QSerialPort::NoParity);
    serial.setStopBits(QSerialPort::OneStop);
    serial.close();
    if(serial.open(QIODevice::ReadWrite))
    {
        connect(&serial,SIGNAL(readyRead()),this,SLOT(read_Com()));
    }
    QString sourcefile1(tr("C:\\Users\\Acer\\Desktop\\inputd"));
    QString sourcefile2(tr("C:\\Users\\Acer\\Desktop\\inputd2"));
    QString tofile1(tr("E:\\inputd"));
    QString tofile2(tr("E:\\inputd2"));
    QFile::copy(sourcefile1,tofile1);
    QFile::copy(sourcefile2,tofile2);
    //char a='\0';
    QByteArray signaldate("0");
    serial.write(signaldate);
}

MainWindow::~MainWindow()
{
    serial.close();
    delete ui;
}

void MainWindow::on_trainButton_clicked()
{
    QByteArray signaldate("1");
    serial.write(signaldate);
}

void MainWindow::on_testButton_clicked()
{
    QByteArray signaldate("2");
    serial.write(signaldate);
}
void MainWindow::read_Com()
{
    QByteArray temp=serial.readAll();
    ui->textBrowser->insertPlainText(temp);
}
