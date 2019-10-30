#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include "secdialog.h"
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//    SecDialog secDeialog;
//    secDeialog.setModal(true);
//    secDeialog.exec();
    hide();
    secDialog = new SecDialog(this);
    secDialog->show();

}
