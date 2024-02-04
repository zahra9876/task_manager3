#include "delarch.h"
#include "mainwindow.h"
#include "ui_delarch.h"
#include<QFile>
#include<QMessageBox>
DelArch::DelArch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DelArch)
{
    ui->setupUi(this);
}

DelArch::~DelArch()
{
    delete ui;
}

void DelArch::on_buttonBox_accepted()
{
     QString title = ui->lineEdit->text(); // عنوان وظیفه
     QFile file("tasks.txt");
     if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
         // خطا: عدم توانایی در باز کردن فایل
         QMessageBox::critical(this, "Error", "Unable to open file!");
         return;
     }

     QTextStream in(&file);
     bool found = false;

     while (!in.atEnd()) {
         QString line = in.readLine();
         QStringList data = line.split(",");
         QString name = data[0];

         if (name == title) {
             found = true;
             break;
         }
     }

     file.close();

     if (found) {
          unarchiveTask(title);
         DelArch *ad = new DelArch();
         ad->show();
     } else {
         // پیدا نشد: اخطار
         QMessageBox::warning(this, "Warning", "Task not found!");
     }


}


void DelArch::on_buttonBox_rejected()
{
    MainWindow *md=new MainWindow();
    md->show();
    hide();
}

