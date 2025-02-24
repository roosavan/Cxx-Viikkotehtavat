#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setActiveControls();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
    if (tila == 3){
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1+num2;
    qDebug() << "Add: " << result << " = " << num1 << " + " << num2;

    QString uusiResult = QString::number(result);
    ui->result->setText(uusiResult);

    tila = 1;
    setActiveControls();
        qDebug() << "Laskun jalkeen tila" << tila;
    } else {
        qDebug() << "Virhe, molempia numeroita ei syotetty";
    }
}


void MainWindow::on_sub_clicked()
{
    if (tila == 3) {
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1-num2;
    qDebug() << "Sub: " << result << " = " << num1 << " - " << num2;

    QString uusiResult = QString::number(result);
    ui->result->setText(uusiResult);

    tila = 1;
    setActiveControls();
    qDebug() << "Laskun jalkeen tila" << tila;
    } else {
        qDebug() << "Virhe, molempia numeroita ei syotetty";
    }
}


void MainWindow::on_mul_clicked()
{
    if (tila == 3) {
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1*num2;
    qDebug() << "Multiply: " << result << " = " << num1 << " * " << num2;

    QString uusiResult = QString::number(result);
    ui->result->setText(uusiResult);

    tila = 1;
    setActiveControls();
    qDebug() << "Laskun jalkeen tila" << tila;
    } else {
        qDebug() << "Virhe, molempia numeroita ei syotetty";
    }
}


void MainWindow::on_div_clicked()
{
    if (tila == 3) {
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1/num2;
    qDebug() << "Divide: " << result << " = " << num1 << " / " << num2;

    QString uusiResult = QString::number(result);
    ui->result->setText(uusiResult);

    tila = 1;
    setActiveControls();
    qDebug() << "Laskun jalkeen tila" << tila;
    } else {
        qDebug() << "Virhe, molempia numeroita ei syotetty";
    }
}


void MainWindow::on_clear_clicked()
{
    ui->num1->setText("");
    ui->num2->setText("");
    ui->result->setText("");
    tila = 1;
    setActiveControls();
    qDebug() << "Tyhjennetty, tila on" << tila;
}

void MainWindow::numberClickHandler(int n)
{
    qDebug() << "Valittu numero: " << n;
    QString str = QString::number(n);
    if (tila == 1){
        qDebug() << "Elementti num1";
        ui->num1->setText(str);
    }else if(tila == 2){
        qDebug() << "Elementti num2";
        ui->num2->setText(str);
    }
}

void MainWindow::setActiveControls()
{
    if (tila == 1) {
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->div->setEnabled(false);
        ui->mul->setEnabled(false);
    } else if (tila == 2) {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->div->setEnabled(false);
        ui->mul->setEnabled(false);
    } else if (tila == 3) {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->add->setEnabled(true);
        ui->sub->setEnabled(true);
        ui->div->setEnabled(true);
        ui->mul->setEnabled(true);
    }
}



void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N9_clicked()
{
    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_enter_clicked()
{
    if (tila >= 3){
        tila = 3;
    } else {
        tila++;
    }
    qDebug() << "Valittu num" << tila;
    setActiveControls();
}

