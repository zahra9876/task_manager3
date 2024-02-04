#include "edit_team.h"
#include "team_method.h"
#include "ui_edit_team.h"

Edit_Team::Edit_Team(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit_Team)
{
    ui->setupUi(this);
}

Edit_Team::~Edit_Team()
{
    delete ui;
}

void Edit_Team::on_buttonBox_2_accepted()
{
    QString teamN =ui->lineEdit_Tname->text();
    QString TeamR =ui->lineEdit_Tdescription->text();

    team_method team;
    team.EditTeam(teamN,TeamR);

}

