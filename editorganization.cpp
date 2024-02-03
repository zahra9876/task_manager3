#include "editorganization.h"
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


       int index = -1;
       for (int i = 0; i < organize.size(); i++) {
           if (organize[i].getName() == organizationName) {
               index = i;
               break;
           }
       }

       if (index != -1) {
           organize[index].setName(organizationName);
            organize[index].setDescription(organizationName);
}
}

