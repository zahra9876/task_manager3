#include "addtaskteam.h"
#include "ui_addtaskteam.h"
#include <QFile>
AddTaskTeam::AddTaskTeam(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTaskTeam)
{
    ui->setupUi(this);
}

AddTaskTeam::~AddTaskTeam()
{
    delete ui;
}

void AddTaskTeam::on_buttonBox_accepted()
{
    QString task = ui->lineEdit_task->text();
    QString team = ui->lineEdit_task->text();
    QFile file("task_for_team.txt");

    if(!file.open(QIODevice::Append | QIODevice::Text)) {
       return;
    }
    QTextStream out(&file);
    out << task << "=" << team << "\n" ;


  file.close();
}

