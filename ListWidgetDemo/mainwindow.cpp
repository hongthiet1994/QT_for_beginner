#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item1 = new QListWidgetItem(QIcon(":/resource/img/new.png"),"Mark");
    ui->listWidget->addItem(item1);
    QListWidgetItem *item2 = new QListWidgetItem(QIcon(":/resource/img/open.png"),"Mark");
    ui->listWidget->addItem(item2);
    QListWidgetItem *item3 = new QListWidgetItem(QIcon(":/resource/img/close.png"),"Mark");
    ui->listWidget->addItem(item3);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //QMessageBox::information(this,"title",ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackgroundColor(Qt::red);
    ui->listWidget->currentItem()->setForeground(Qt::white);
}
