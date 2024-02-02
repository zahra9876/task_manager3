#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "create_organ.h"
#include "show_organ.h"
#include "ui_show_organ.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

organization org[20];
int i = 0;

void MainWindow::on_create_clicked()
{
    create_organ *CO=new create_organ(this);
    connect(CO,SIGNAL(item_added(QString)),this,SLOT(add_item(QString)));
    CO->show();
}

void MainWindow::add_item(QString item)
{
    org[i].set_name(item);
    i++;
}


void MainWindow::on_show_clicked()
{
    show_organ *SO = new show_organ(this);
    SO->show();
}

