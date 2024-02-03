#include "delete_member.h"
#include "ui_delete_member.h"

Delete_Member::Delete_Member(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_Member)
{
    ui->setupUi(this);
}

Delete_Member::~Delete_Member()
{
    delete ui;
}

void Delete_Member::on_buttonBox_accepted()
{

}

