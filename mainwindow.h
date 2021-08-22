#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"notification.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_11_clicked();

    void on_lineEdit_returnPressed();

    void on_pushButton_19_clicked();

    void on_pushButton_18_clicked();

private:
    Ui::MainWindow *ui;
   // Notification N;
};
#endif // MAINWINDOW_H
