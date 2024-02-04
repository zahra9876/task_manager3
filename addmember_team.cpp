#include "addmember_team.h"
#include "ui_addmember_team.h"
#include<QFile>
#include <QString>

AddMember_team::AddMember_team(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddMember_team)
{
    ui->setupUi(this);
}

AddMember_team::AddMember_team(QString TName)
{
    TeamName = TName;
}

AddMember_team::~AddMember_team()
{
    delete ui;
}




void AddMember_team::on_buttonBox_2_accepted()
{
    QString member = (ui->lineEdit_2->text());
    QString role = (ui->comboBox->currentText());
    QString fileName = TeamName + "Members.txt";
    QFile file(fileName);

    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
       return;
    }

    QTextStream out(&file);


      out << member << "=" << role << "\n" ;


    file.close();

}

