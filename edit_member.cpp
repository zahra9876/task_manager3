#include "edit_member.h"
#include "ui_edit_member.h"

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
    bool flag;
    for (auto& org : organize) {
        if (org.getName() == orgName) {
            flag = (ui->comboBox_gender->currentIndex() == 1) ? false : true;
            org.updateMemberRole(ui->lineEdit->text(), flag);
            break;
        }
    }
}

