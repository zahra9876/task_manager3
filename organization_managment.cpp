#include "organization_managment.h"
#include "mainwindow.h"
#include "ui_organization_managment.h"
#include"QListWidget"
#include"deletemember.h"
#include"edit_member.h"
#include"addmember.h"
#include <iostream>
#include<QFile>
#include <fstream>
Organization_Managment::Organization_Managment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Organization_Managment)
{
    ui->setupUi(this);
}

Organization_Managment::~Organization_Managment()
{
    delete ui;
}

void Organization_Managment::on_toolButton_clicked()
{


      QString orgName = ui->lineEditOrg->text();
      ui->listWidget->clear();

      QString fileName = orgName + "Members.txt";
      QFile file(fileName);
      if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
          QTextStream in(&file);

          while (!in.atEnd()) {
              QString line = in.readLine();
              QStringList data = line.split("=");
              QString name = data[0];
              QString role = data[1];
              QString listItemText = name + " - " + role;
              ui->listWidget->addItem(listItemText);

              }
          }

          file.close();



}


void Organization_Managment::on_pushButton_clicked()
{
        QString ajab=ui->lineEditOrg->text();
       AddMember *add = new AddMember();
       add->setName(ajab);
       add->show();
       hide();

}


void Organization_Managment::on_pushButton_2_clicked()
{
    DeleteMember *dm = new DeleteMember();
    dm->setName(ui->lineEditOrg->text());
    dm->show();
    hide();

}


void Organization_Managment::on_pushButton_3_clicked()
{
    Edit_Member *ed = new Edit_Member();
    ed->setName(ui->lineEditOrg->text());
    ed->show();
    hide();
}


void Organization_Managment::on_pushButton_4_clicked()
{
    MainWindow *fp=new MainWindow();
    fp->show();
    hide();
}


void Organization_Managment::on_toolButton_triggered(QAction *arg1)
{
    QString orgName = ui->lineEditOrg->text();
    ui->listWidget->clear();

    QString fileName = orgName + "Members.txt";
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList data = line.split("=");
            QString name = data[0];
            QString role = data[1];
            QString listItemText = name + " - " + role;
            ui->listWidget->addItem(listItemText);

            }
        }

        file.close();
}

