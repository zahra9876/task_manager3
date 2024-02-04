#include "delete_team.h"
#include "ui_delete_team.h"
#include "mainwindow.h"
#include<QMessageBox>
#include "team_method.h"
Delete_Team::Delete_Team(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_Team)
{
    ui->setupUi(this);
}

Delete_Team::~Delete_Team()
{
    delete ui;
}

void Delete_Team::on_buttonBox_accepted()
{
     team_method team;
     team.DeleteTeam(ui->lineEdit_team->text());
}


void Delete_Team::on_buttonBox_rejected()
{
    MainWindow *fp=new MainWindow(this);
    fp->show();
    hide();
}

