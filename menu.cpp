#include "menu.h"
#include "ui_menu.h"


Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
//    create_board=new Dialog(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_buttonBox_accepted()
{

}


void Menu::on_pushButton_cb_clicked()
{

       create_board->setModal(true);
       create_board->show();
       hide();

}


void Menu::on_pushButton_clicked()
{

}


void Menu::on_pushButton_2_clicked()
{

}

