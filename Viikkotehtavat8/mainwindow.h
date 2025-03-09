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
    void timerSlot();
    void on_min2_clicked();
    void on_min5_clicked();
    void on_startGame_clicked();
    void on_stopGame_clicked();

    void on_end1_clicked();

    void on_end2_clicked();

private:
    Ui::MainWindow *ui;
    short gameTime = 120;
    short player1time = 120;
    short player2time = 120;
    int currentPlayer = 0;
    QTimer *gameTimer = nullptr;
};
#endif // MAINWINDOW_H
