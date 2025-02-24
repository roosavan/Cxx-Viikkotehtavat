#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Add_clicked()
{
    QString str = ui->Number->text();
    int num = str.toInt();
    qDebug() << "Numero = " << num;
    num++;
    QString uusiStr = QString::number(num);
    qDebug() << "Kasvatettu numero = " << num;
    ui->Number->setText(uusiStr);
}


void MainWindow::on_Reset_clicked()
{
    ui->Number->setText("0");
}

