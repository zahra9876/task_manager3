#include "editorganization.h"
#include "mainwindow.h"
#include "ui_editorganization.h"

EditOrganization::EditOrganization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditOrganization)
{
    ui->setupUi(this);
}

EditOrganization::~EditOrganization()
{
    delete ui;
}

void EditOrganization::on_buttonBox_accepted()
{
       QString organizationName =ui->lineEdit_name->text();
       QString organizationDescription =ui->lineEdit_description->text();
       Org_Methods org0;
       org0.editOrganizationDescription(organizationName,organizationDescription);



}


void EditOrganization::on_buttonBox_rejected()
{
    MainWindow *fp=new MainWindow(this);
    fp->show();
    hide();
}

