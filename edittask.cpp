#include "edittask.h"
#include "mainwindow.h"
#include "ui_edittask.h"

EditTask::EditTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditTask)
{
    ui->setupUi(this);
}

EditTask::~EditTask()
{
    delete ui;
}

void EditTask::on_buttonBox_accepted()
{
    QString name= ui->lineEdit_n->text();
     QString dec= ui->lineEdit_2_d->text();
    QDate dat =ui->dateEdit->date();
    TaskManager taskm;
    taskm.editTask(name,dec,dat);
    EditTask *fp=new EditTask();
    fp->show();
    hide();
}


void EditTask::on_buttonBox_rejected()
{
    MainWindow *md=new MainWindow();
    md->show();
    hide();
}

