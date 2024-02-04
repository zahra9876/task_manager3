#include "deletemember_team.h"
#include "ui_deletemember_team.h"
#include <QFile>

deletemember_team::deletemember_team(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::deletemember_team)
{
    ui->setupUi(this);
}

deletemember_team::~deletemember_team()
{
    delete ui;
}

void deletemember_team::on_buttonBox_accepted()
{
    QString member = ui->lineEdit_2->text();
       QString fileName = TeamName + "Members.txt";

       QFile file(fileName);
       if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
           return;
       }

       QString fileData;
       QTextStream in(&file);
       bool found = false;

       while (!in.atEnd()) {
           QString line = in.readLine();
           QStringList data = line.split("=");
           QString name = data[0];

           if (name != member) {
               fileData += line + "\n";
           } else {
               found = true;
           }
       }

       if (found) {
           file.resize(0);
           QTextStream out(&file);
           out << fileData;
       }

       file.close();
}

