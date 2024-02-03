#include "addmember.h"
#include "organization_managment.h"
#include "ui_addmember.h"
#include<QFile>

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

    QString Member=(ui->lineEdit_2->text());
    QString role = ui->comboBox_gender->currentText();

        QFile file("users.txt");
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            bool found = false;

            while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList data = line.split(",");
                QString username = data[0];


                if (username == Member) {

                    found = true;

                    break;
                }
            }

            file.close();
            if(found){
                QMessageBox::information(this,Member,"added in successfully!");
                QString fileName = orgName + "Members.txt";

                  QFile file(fileName);
                  if(!file.open(QIODevice::Append | QIODevice::Text)) {
                     return;
                  }

                  QTextStream out(&file);


                    out << Member << "=" << role << "\n" ;


                  file.close();



            }
            else{
                QMessageBox::warning(this,Member,"member didnt found");
            }
               }


}


void AddMember::on_buttonBox_2_rejected()
{
    Organization_Managment *om=new Organization_Managment();
    om->show();
    hide();

}

