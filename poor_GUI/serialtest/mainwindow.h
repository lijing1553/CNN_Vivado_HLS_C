#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QByteArray>
#include <QtSerialPort/QtSerialPort>
#include <QFile>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_trainButton_clicked();
    void read_Com();
    void on_testButton_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort serial;
};

#endif // MAINWINDOW_H
