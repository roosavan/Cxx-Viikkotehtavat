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
		if (gameTimer) {
				gameTimer->stop();
				delete gameTimer;
		}
		delete ui;
}

void MainWindow::timerSlot()
{
    if (currentPlayer == 1) {
        player1time--;
        ui->progressBar1->setValue(player1time);
        qDebug() << "Player1 " << player1time;

        if (player1time == 0) {
            ui->statusBar->showMessage("Player 1 lost!");
            on_stopGame_clicked();
        }
    } else if (currentPlayer == 2) {
        player2time--;
        ui->progressBar2->setValue(player2time);
        qDebug() << "Player2 " << player2time;

        if (player2time == 0) {
            ui->statusBar->showMessage("Player 2 lost!");
            on_stopGame_clicked();
        }
    }
}

void MainWindow::on_min2_clicked()
{
    gameTime = 120;
    qDebug() << "Gametime set to " << gameTime;
    ui->progressBar1->setRange(0,gameTime);
    ui->progressBar2->setRange(0,gameTime);
    ui->progressBar1->setValue(gameTime);
    ui->progressBar2->setValue(gameTime);
    ui->statusBar->showMessage("Game time 120 seconds");
}


void MainWindow::on_min5_clicked()
{
    gameTime = 300;
    qDebug() << "Gametime set to " << gameTime;
    ui->progressBar1->setRange(0,gameTime);
    ui->progressBar2->setRange(0,gameTime);
    ui->progressBar1->setValue(gameTime);
    ui->progressBar2->setValue(gameTime);
    ui->statusBar->showMessage("Game time 300 seconds");
}


void MainWindow::on_startGame_clicked()
{
    qDebug() << "Game started, time " << gameTime;
    player1time = gameTime;
    player2time = gameTime;
    ui->progressBar1->setValue(gameTime);
    ui->progressBar2->setValue(gameTime);
    currentPlayer = 1;
    ui->statusBar->showMessage("Player 1 turn");
    gameTimer = new QTimer(this);
    connect(gameTimer,&QTimer::timeout, this, &MainWindow::timerSlot);
    gameTimer->setInterval(1000);
    gameTimer->start();
}

void MainWindow::on_stopGame_clicked()
{
    qDebug() << "Game stopped";
    if ((player1time > 0) && (player2time > 0)) {
        ui->statusBar->showMessage("Game stopped");
    }
    currentPlayer = 0;
    if (gameTimer) {
        gameTimer->stop();
        delete gameTimer;
        gameTimer = nullptr;
    }
}

void MainWindow::on_end1_clicked()
{
    if (currentPlayer == 1) {
        currentPlayer = 2;
        qDebug() << "Player1 end turn";
        ui->statusBar->showMessage("Player 2 turn");
    }
}

void MainWindow::on_end2_clicked()
{
    if (currentPlayer == 2) {
        currentPlayer = 1;
        qDebug() << "Player2 end turn";
        ui->statusBar->showMessage("Player 1 turn");
    }
}

