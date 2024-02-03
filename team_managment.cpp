#include "team_managment.h"
#include "ui_team_managment.h"

Team_Managment::Team_Managment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Team_Managment)
{
    ui->setupUi(this);
}

Team_Managment::~Team_Managment()
{
    delete ui;
}
