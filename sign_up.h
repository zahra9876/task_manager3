#ifndef SIGN_UP_H
#define SIGN_UP_H
#include <QDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QMainWindow>
#include "mainwindow.h"
#include"users.h"

namespace Ui {
class Sign_Up;
}

class Sign_Up : public QDialog
{
    Q_OBJECT

public:
    explicit Sign_Up(QWidget *parent = nullptr);
    QVector<Users> userList;

     void saveUserList( Users& personInformation) {

      QFile file("users.txt");
      if (!file.open(QIODevice::Append | QIODevice::Text))
         return;

      QTextStream out(&file);
      out << personInformation.getUsername() << ","
          << personInformation.getPassword() << ","
          << personInformation.getName() << ","
          << personInformation.getEmail() << ","
          << personInformation.getAge() << ","
          << personInformation.getGender() << "\n";
      file.close();

    }
    ~Sign_Up();

private slots:
     void on_confirm_clicked();

private:
    Ui::Sign_Up *ui;
};

#endif // SIGN_UP_H
