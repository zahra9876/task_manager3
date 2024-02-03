#include "add_orgenization.h"
#include "ui_add_orgenization.h"
#include"mainwindow.h"
add_orgenization::add_orgenization(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_orgenization)
{
    ui->setupUi(this);
}

add_orgenization::~add_orgenization()
{
    delete ui;
}

void add_orgenization::on_pushButton_clicked()
{
    Org_Methods org0;
    org0.addOrganization(ui->lineEdit_name->text(),ui->lineEdit_description->text());
    Organizationss org(ui->lineEdit_name->text(),ui->lineEdit_description->text());
    org.addMember(ui->lineEdit_members->text());
    org.addroles(ui->lineEdit_admin->text());
    org.saveToFile();
    MainWindow *fp=new MainWindow();
    fp->show();
    hide();
//    organize.push_back(org);
}


void add_orgenization::on_pushButton_2_clicked()
{
    MainWindow *fp=new MainWindow();
    fp->show();
    hide();
}

