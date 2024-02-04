#include "add_team.h"
#include "ui_add_team.h"

Add_Team::Add_Team(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_Team)
{
    ui->setupUi(this);
}


Add_Team::~Add_Team()
{
    delete ui;
}

void Add_Team::on_pushButton_clicked()
{
      Team team(ui->lineEdit_name->text(),ui->lineEdit_description->text());
    team.setMembers(ui->lineEdit_members->text());
    team.setMembersRoles(ui->lineEdit_admin->text());
    team.SaveToFile();

}

