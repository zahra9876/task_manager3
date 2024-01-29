#include "log_in.h"
#include "ui_log_in.h"

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
                    break;
                }
            }

            file.close();


     if(usernameLog=="Admin"&&passwordLog=="Admin"){
         QMessageBox::information(this,usernameLog,"log in successfully!");
     }
     else if(found){
          QMessageBox::information(this, usernameLog, "ورود با موفقیت انجام شد!");
     }
     else{
         QMessageBox::warning(this,usernameLog,"please Enter valid user name and password!");
     }
        }
}

