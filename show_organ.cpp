#include "show_organ.h"
#include "ui_show_organ.h"
#include "create_organ.h"
#include <QListWidget>
show_organ::show_organ(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::show_organ)
{
    ui->setupUi(this);
}

show_organ::~show_organ()
{
    delete ui;
}

void load_name_from_file(){
    QListWidget *ListWidget = new QListWidget();

    QFile file("organization.txt");
    file.open(QIODevice::ReadOnly);
    if(!file.open(QIODevice::ReadOnly)){
        ListWidget->addItem("File can not open.");
    }
    else {
        QTextStream in(&file);
         while(!in.atEnd()){
             QString line = in.readLine();
             ListWidget->addItem(line);
             ListWidget->addItem(" , ");
         }
    }
}

