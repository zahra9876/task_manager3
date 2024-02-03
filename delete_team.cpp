#include "delete_team.h"
#include "ui_delete_team.h"
#include<QMessageBox>
Delete_Team::Delete_Team(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Delete_Team)
{
    ui->setupUi(this);
}

Delete_Team::~Delete_Team()
{
    delete ui;
}

void Delete_Team::on_buttonBox_accepted()
{
    QString teamName = ui->lineEdit_team->text();
       int index = -1;
//       for (int i = 0; i < teamize.size(); i++) {
//           if (teamize[i].getName() == teamName) {
//               index = i;
//               break;
//           }
//       }

//       if (index != -1) {

//           teamize.remove(index);
//       }
//       else{
//            QMessageBox::information(this,teamName,"couldn't find team!");
//       }
}

