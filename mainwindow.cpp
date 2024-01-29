#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sign_up.h"
#include "log_in.h"
#include"forgot_password.h"
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




void MainWindow::on_sing_up_clicked()
{
    Sign_Up *sd=new Sign_Up(this);
    close();
    sd->show();
}


void MainWindow::on_log_in_clicked()
{
    Log_in *ld=new Log_in(this);
     ld->show();
}


void MainWindow::on_pushButton_clicked()
{

    Forgot_Password *fp=new Forgot_Password(this);
    fp->show();
}

