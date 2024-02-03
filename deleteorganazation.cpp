#include "deleteorganazation.h"
#include "mainwindow.h"
#include "ui_deleteorganazation.h"
#include<QMessageBox>

DeleteOrganazation::DeleteOrganazation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteOrganazation)
{
    ui->setupUi(this);
}

DeleteOrganazation::~DeleteOrganazation()
{
    delete ui;
}

void DeleteOrganazation::on_buttonBox_accepted()
{
    Org_Methods org0;
    org0.deleteOrganization(ui->lineEdit->text());
}


void DeleteOrganazation::on_buttonBox_rejected()
{
    MainWindow *fp=new MainWindow(this);
    fp->show();
    hide();
}

