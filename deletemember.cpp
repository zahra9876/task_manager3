#include "deletemember.h"
#include "organization_managment.h"
#include "ui_deletemember.h"
#include<QFile>
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
    QString member = ui->lineEdit_2->text();
       QString fileName = orgName + "Members.txt";

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
       if(found){
           QMessageBox::information(this,member,"delted in successfully!");




       }
       else{
           QMessageBox::warning(this,member,"member didnt found");
       }
       DeleteMember *dm=new DeleteMember();
       dm->show();


          }






void DeleteMember::on_buttonBox_rejected()
{
    Organization_Managment *om=new Organization_Managment();
    om->show();
    hide();

}

