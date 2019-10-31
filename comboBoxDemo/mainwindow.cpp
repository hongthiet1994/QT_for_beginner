#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->comboBox->addItem(QIcon(":/resource/img/close.png"),"Mark");
    //ui->comboBox->addItem(QIcon(":/resource/img/new.png"),"Jhon");
    //ui->comboBox->addItem(QIcon(":/resource/img/open.png"),"July");
    for (int i=0;i<10;i++)
    {
        ui->comboBox->addItem(QIcon(":/resource/img/close.png"),QString::number(i) + "Name");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   QMessageBox::information(this,"title",QString::number( ui->comboBox->currentIndex()));
}
