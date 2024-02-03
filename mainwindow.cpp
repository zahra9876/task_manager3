#include "mainwindow.h"
#include "editorganization.h"
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

