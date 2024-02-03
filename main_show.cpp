#include "main_show.h"
#include "ui_main_show.h"
#include "sign_up.h"
#include "log_in.h"
#include"forgot_password.h"
Main_Show::Main_Show(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Main_Show)
{
    ui->setupUi(this);
}

Main_Show::~Main_Show()
{
    delete ui;
}
void Main_Show::on_sing_up_clicked()
{
    Sign_Up *sd=new Sign_Up(this);
    sd->show();
    hide();
}


void Main_Show::on_log_in_clicked()
{
    Log_in *ld=new Log_in(this);
     ld->show();
     hide();
}


void Main_Show::on_pushButton_clicked()
{

    Forgot_Password *fp=new Forgot_Password(this);
    fp->show();
    hide();
}
