#include "forgot_password.h"
#include "ui_forgot_password.h"
#include <QRegularExpression>
#include <QDebug>

bool isValidPassword2(const QString& password)
{

    QRegularExpression passwordRegex("^(?=.*[A-Za-z])(?=.*\\d)(?=.*[$@$!%*#?&])[A-Za-z\\d$@$!%*#?&]{8,}$");
    QRegularExpressionMatch match = passwordRegex.match(password);


    if (match.hasMatch()) {
        return true;
    } else {
        return false;
    }
}
Forgot_Password::Forgot_Password(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Forgot_Password)
{
    ui->setupUi(this);
}

Forgot_Password::~Forgot_Password()
{
    delete ui;
}

void Forgot_Password::on_Reset_clicked()
{
    QString usernameLog = ui->lineEdit_2_username->text();
      QString nameLog = ui->lineEdit_name->text();
      QString gmailLog = ui->lineEdit_3_gmail->text();
      QString passwordLog = ui->lineEdit_2_newPass->text();
      QString confirmLog = ui->lineEdit_confirmPass->text();

      QFile file("users.txt");
      if (file.open(QIODevice::ReadWrite | QIODevice::Text)) {
          QTextStream in(&file);
          bool found = false;
          QString fileData;

          while (!in.atEnd()) {
              QString line = in.readLine();
              QStringList data = line.split(",");
              QString username = data[0];
              QString name = data[2];
              QString gmail = data[3];

              if (username == usernameLog && nameLog == name && gmail == gmailLog) {
                             found = true;
                             line = username + "," + passwordLog + "," + name + "," + gmail;
              }

              fileData += line + "\n";
          }

          if (found) {

              if (passwordLog == confirmLog) {
                 if(isValidPassword2(passwordLog)){
                     file.resize(0);
                     file.write(fileData.toUtf8());
                     file.close();
                     QMessageBox::information(this, usernameLog, "Password has been changed successfully!");
                 }
                 else{
                     QMessageBox::warning(this, passwordLog, "Password :Minimum 8 characters at least 1 Alphabet, 1 Number and 1 Special Character:!");
                 }
              } else {
                  QMessageBox::warning(this, passwordLog, "Password doesn't match with confirm password!");
              }
          } else {
              QMessageBox::warning(this, usernameLog, "User not found!");
          }
      } else {
          QMessageBox::warning(this, "Error", "Failed to open users file!");
      }
}

