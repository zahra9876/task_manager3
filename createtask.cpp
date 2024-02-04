#include "createtask.h"
#include "mainwindow.h"
#include "ui_createtask.h"
#include<QDate>
CreateTask::CreateTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateTask)
{
    ui->setupUi(this);
}

CreateTask::~CreateTask()
{
    delete ui;
}

void CreateTask::on_buttonBox_accepted()
{
    QString name= ui->lineEdit_n->text();
     QString dec= ui->lineEdit_2_d->text();
    QDate dat =ui->dateEdit->date();
    TaskManager taskm;
    taskm.createTask(name,dec,dat);
    CreateTask *fp=new CreateTask();
    fp->show();
    hide();
}


void CreateTask::on_buttonBox_rejected()
{
    MainWindow *md=new MainWindow();
    md->show();
    hide();
}

