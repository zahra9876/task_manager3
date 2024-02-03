#include "sign_up.h"
#include "ui_sign_up.h"
#include <QRegularExpression>
#include <QDebug>
#include<QChar>
#include"main_show.h"
#include<QList>
bool isValidPassword(const QString& password)
{

    QRegularExpression passwordRegex("^(?=.*[A-Za-z])(?=.*\\d)(?=.*[$@$!%*#?&])[A-Za-z\\d$@$!%*#?&]{8,}$");
    QRegularExpressionMatch match = passwordRegex.match(password);


    if (match.hasMatch()) {
        return true;
    } else {
        return false;
    }
}

Sign_Up::Sign_Up(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sign_Up)
{
    ui->setupUi(this);
    ui->lineEdit_1_username->setFocus();
}

Sign_Up::~Sign_Up()
{
    delete ui;
}


void Sign_Up::on_confirm_clicked()
{


    if(isValidPassword(ui->lineEdit_2_password->text())){
        int flag = 1;
        Users newUser;
        newUser.setUsername(ui->lineEdit_1_username->text());
        newUser.setName(ui->lineEdit_3_name->text());
        newUser.setPassword(ui->lineEdit_2_password->text());
        newUser.setEmail(ui->lineEdit_4_email->text());
        newUser.setAge(ui->lineEdit_5_age->text().toInt());
        newUser.setGender(ui->comboBox_gender->currentIndex());

        for (auto user : userList) {
            if (user.getUsername() == newUser.getUsername()) {
                flag = 0;
                break;
            }
        }

        if (flag != 0) {
            userList.push_back(newUser);
            saveUserList(newUser);
            QMessageBox::information(this, "successfully", "user added successfully!");


        } else {
            QMessageBox::information(this, "Error", "Username already exists!");
        }

            Main_Show *mainWin = new Main_Show;
               mainWin->show();
             accept();

    }
    else{
        QMessageBox::warning(this, "error", "Password :Minimum 8 characters at least 1 Alphabet, 1 Number and 1 Special Character:!");

        ui->lineEdit_2_password->setFocus();
    }
}

