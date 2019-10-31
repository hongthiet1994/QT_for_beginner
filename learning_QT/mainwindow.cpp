#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include "secdialog.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/pic.png");
    ui->label_pic->setPixmap(pix.scaled(100,100,Qt::KeepAspectRatio));
    ui->statusbar->addPermanentWidget(ui->label_3);
    ui->statusbar->addPermanentWidget(ui->progressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
   QString username = ui->lineEdit_username ->text();
   QString password = ui->lineEdit_password ->text();
   if(username == "test" && password == "test")
   {
       //QMessageBox::information(this,"Login","username and password is correct");
       //hide();
       //secDialog = new SecDialog(this);
       //secDialog->show();
       ui->statusbar->showMessage("User name and password is correct",5000);
   }
   else
   {
       //QMessageBox::warning(this,"Login","username and password is not correct");
       ui->statusbar->showMessage("User name and password is not correct",5000);
   }
}
