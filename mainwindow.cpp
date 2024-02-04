#include "mainwindow.h"
#include "addarch.h"
#include "addtasktoorg.h"
#include "createtask.h"
#include "deltask.h"
#include "editorganization.h"
#include "edittask.h"
#include "ui_mainwindow.h"
#include<QListWidget>
#include<QFile>
#include"organization_managment.h"
#include"add_orgenization.h"
#include"deleteorganazation.h"
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

void MainWindow::on_actionsee_organizations_triggered()
{
    Organization_Managment *om=new Organization_Managment();
    om->show();
    hide();



}


void MainWindow::on_actionadd_organization_triggered()
{
    add_orgenization *ad=new add_orgenization();
    ad->show();
    hide();

}


void MainWindow::on_actionremove_orgenization_triggered()
{
    DeleteOrganazation *ad = new DeleteOrganazation();
    ad->show();
    hide();

}


void MainWindow::on_actionedit_Organization_triggered()
{
    EditOrganization *ad = new EditOrganization();
    ad->show();
    hide();
}


void MainWindow::on_pushButton_clicked()
{
    CreateTask *cr=new CreateTask();
            cr->show();
            hide();

}


void MainWindow::on_pushButton_2_clicked()
{
    EditTask *cr=new EditTask();
            cr->show();
            hide();
}


void MainWindow::on_pushButton_3_clicked()
{
    DelTask *cr=new DelTask();
            cr->show();
            hide();
}


void MainWindow::on_pushButton_4_clicked()
{

}


void MainWindow::on_toolButton_archived_clicked()
{
     ui->listWidget_arc->clear();
    QString fileName = "Archivetasks.txt";
     QFile file(fileName);
     if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
         return;
     }

     QTextStream in(&file);

     while (!in.atEnd()) {
         QString line = in.readLine();
         QStringList data = line.split(",");
         QString title = data[0];
         QString description = data[1];
         QString dast = data[2];

         QString taskText = title + " - " + description + " (" + dast + ")";
         ui->listWidget_arc->addItem(taskText);
     }

     file.close();
 }

void MainWindow::on_DeleteArchive_clicked()
{

}


void MainWindow::on_addArchive_clicked()
{
    AddArch *ac=new AddArch();
    ac->show();
    hide();

}


void MainWindow::on_pushButton_5_clicked()
{
    AddTaskToOrg *ad=new AddTaskToOrg();
    ad->show();
    hide();
}


void MainWindow::on_toolButton_6_clicked()
{

}

