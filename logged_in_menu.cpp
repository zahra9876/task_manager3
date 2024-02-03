#include "logged_in_menu.h"
#include "ui_logged_in_menu.h"

logged_in_menu::logged_in_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logged_in_menu)
{
    ui->setupUi(this);
}

logged_in_menu::~logged_in_menu()
{
    delete ui;
}
