#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_pushButton_clicked()
{
    ui->pushButton->setText("Resume");
    Dialog = new class start(this);
    Dialog->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply= QMessageBox::question(this,"","Do you want to quit ?"
                                                             ,QMessageBox::Yes | QMessageBox::No);
    if (reply==QMessageBox::Yes)
        QApplication::quit();
}
