#include "addmember.h"
#include "ui_addmember.h"

AddMember::AddMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddMember)
{
    ui->setupUi(this);
}
AddMember::AddMember(QString _org)
{
    orgName=_org;
}

AddMember::~AddMember()
{
    delete ui;
}

void AddMember::on_buttonBox_2_accepted()
{
   for(auto & org:organize){
       if(org.getName()==orgName){
           org.addMember(ui->lineEdit->text());
       }

   }

}

