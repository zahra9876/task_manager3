#include "deleteorganazation.h"
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
    QString organizationName = ui->lineEdit->text();
       int index = -1;
       for (int i = 0; i < organize.size(); i++) {
           if (organize[i].getName() == organizationName) {
               index = i;
               break;
           }
       }

       if (index != -1) {

           organize.remove(index);
       }
       else{
            QMessageBox::information(this,organizationName,"couldn't find organization!");
       }
}

