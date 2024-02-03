#include "edit_member.h"
#include "organization_managment.h"
#include "ui_edit_member.h"
#include<QFile>
Edit_Member::Edit_Member(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit_Member)
{
    ui->setupUi(this);
}

Edit_Member::~Edit_Member()
{
    delete ui;
}

void Edit_Member::on_buttonBox_accepted()
{
    QString member = ui->lineEdit->text();
        QString role = ui->comboBox_gender->currentText();
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

            if (name == member) {
                line = name + "=" + role;
                found = true;
            }

            fileData += line + "\n";
        }

        if (found) {
            file.resize(0);
            QTextStream out(&file);
            out << fileData;
        }

        file.close();

}


void Edit_Member::on_buttonBox_rejected()
{
    Organization_Managment *om=new Organization_Managment();
    om->show();
    hide();

}

