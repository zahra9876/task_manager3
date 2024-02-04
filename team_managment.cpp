#include "team_managment.h"
#include "addmember_team.h"
#include "deletemember_team.h"
#include "editmember_team.h"
#include "mainwindow.h"
#include "ui_team_managment.h"
#include <QFile>
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

void Team_Managment::on_pushButton_clicked()
{

    QString TeamName = ui->lineEdit->text();
    ui->listWidget->clear();

    QString fileName = TeamName + "Members.txt";
    QFile file(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList data = line.split("=");
            QString name = data[0];
            QString role = data[1];
            QString listItemText = name + " - " + role;
            ui->listWidget->addItem(listItemText);

            }
        }

        file.close();


}


void Team_Managment::on_pushButton_2_clicked()
{
    AddMember_team *adt = new AddMember_team(ui->lineEdit->text());
    adt->show();
    hide();

}


void Team_Managment::on_pushButton_3_clicked()
{
    deletemember_team *dmt = new deletemember_team(ui->lineEdit->text());
    dmt->show();
    hide();

}


void Team_Managment::on_pushButton_4_clicked()
{
    EditMember_team *edt = new EditMember_team(ui->lineEdit->text());
    edt->show();
    hide();
}


void Team_Managment::on_pushButton_5_clicked()
{
    MainWindow *fp=new MainWindow(this);
    fp->show();
    hide();
}

