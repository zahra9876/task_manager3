#include "organization_managment.h"
#include "ui_organization_managment.h"
#include"QListWidget"
#include"deletemember.h"
#include"edit_member.h"
#include"addmember.h"
Organization_Managment::Organization_Managment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Organization_Managment)
{
    ui->setupUi(this);
}

Organization_Managment::~Organization_Managment()
{
    delete ui;
}

void Organization_Managment::on_toolButton_clicked()
{
    QString removN = "";
      QString orgName = ui->lineEditOrg->text();
      ui->listWidget->clear();

      for (auto& org : organize) {
          if (orgName == org.getName()) {
              for (auto& member : org.getMember()) {
                  ui->listWidget->addItem(member);
              }
              break;
          }

 }

}


void Organization_Managment::on_pushButton_clicked()
{
       AddMember *ad = new AddMember(ui->lineEditOrg->text());
       ad->show();
       hide();

}


void Organization_Managment::on_pushButton_2_clicked()
{
    DeleteMember *dm = new DeleteMember(ui->lineEditOrg->text());
    dm->show();
    hide();

}


void Organization_Managment::on_pushButton_3_clicked()
{
    Edit_Member *ed = new Edit_Member(ui->lineEditOrg->text());
    ed->show();
    hide();
}

