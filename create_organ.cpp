#include "create_organ.h"
#include "ui_create_organ.h"

create_organ::create_organ(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::create_organ)
{
    ui->setupUi(this);
}

create_organ::~create_organ()
{
    delete ui;
}




void create_organ::on_buttonBox_accepted()
{
    emit item_added(ui->lineEdit->text());
}

