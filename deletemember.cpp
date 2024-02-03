#include "deletemember.h"
#include "ui_deletemember.h"

DeleteMember::DeleteMember(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeleteMember)
{
    ui->setupUi(this);
}

DeleteMember::~DeleteMember()
{
    delete ui;
}

void DeleteMember::on_buttonBox_accepted()
{
    for(auto & org:organize){
        if(org.getName()==orgName){
            org.removeMember(ui->lineEdit_2->text());
        }

    }
}

