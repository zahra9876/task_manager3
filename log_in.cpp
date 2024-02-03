#include "log_in.h"
#include "ui_log_in.h"
#include "main_show.h"
#include"mainwindow.h"
#include"showmenue.h"
#include"QListWidget"
Log_in::Log_in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Log_in)
{
    ui->setupUi(this);
}

Log_in::~Log_in()
{
    delete ui;
}



void Log_in::on_pushButton_clicked()
{
    QString usernameLog = ui->user_name->text();
     QString passwordLog = ui->password->text();

        QFile file("users.txt");
        if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&file);
            bool found = false;

            while (!in.atEnd()) {
                QString line = in.readLine();
                QStringList data = line.split(",");
                QString username = data[0];
                QString password = data[1];

                if (username == usernameLog && password == passwordLog) {

                    found = true;
                    QString usernameLg =data[0];
                    QString passwordLg =data[1];

                    break;
                }
            }

            file.close();


     if(usernameLog=="Admin"&&passwordLog=="Admin"){
         QMessageBox::information(this,usernameLog,"log in successfully!");
     }
     else if(found){
         QMessageBox::information(this,usernameLog,"log in successfully!");
         MainWindow *fp=new MainWindow(this);
         fp->show();
         hide();



     }
     else{
         QMessageBox::warning(this,usernameLog,"please Enter valid user name and password!");
     }
        }
}

