#include "showmenue.h"
#include "ui_showmenue.h"
#include"QListWidget"
#include"QFile"

ShowMenue::ShowMenue(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowMenue)
{
    ui->setupUi(this);

}

ShowMenue::~ShowMenue()
{
    delete ui;

}
