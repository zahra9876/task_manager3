#include "deltask.h"
#include "mainwindow.h"
#include "ui_deltask.h"

DelTask::DelTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelTask)
{
    ui->setupUi(this);
}

DelTask::~DelTask()
{
    delete ui;
}

void DelTask::on_buttonBox_rejected()
{
    MainWindow *md=new MainWindow();
    md->show();
    hide();
}


void DelTask::on_buttonBox_accepted()
{
    QString name= ui->lineEdit_n->text();

    TaskManager taskm;
    taskm.deleteTask(name);
    DelTask *fp=new DelTask();
    fp->show();
    hide();
}

