#include "add_team.h"
#include "mainwindow.h"
#include "ui_add_team.h"
#include<QFile>
Add_Team::Add_Team(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Team)
{
    ui->setupUi(this);
}


Add_Team::~Add_Team()
{
    delete ui;
}

void Add_Team::on_pushButton_clicked()
{
      Team team(ui->lineEdit_name->text(),ui->lineEdit_description->text());
       QString orgName=ui->lineEdit_members->text();

    QString fileName = orgName + "Team.txt";

      QFile file(fileName);
      if(!file.open(QIODevice::Append | QIODevice::Text)) {
         return;
      }

      QTextStream out(&file);


        out << ui->lineEdit_name->text() << "=" << ui->lineEdit_description->text() << "\n" ;


      file.close();
      Add_Team *at=new Add_Team();
      at->show();



}


void Add_Team::on_pushButton_2_clicked()
{
    MainWindow *fp=new MainWindow(this);
    fp->show();
    hide();
}

