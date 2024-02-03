#ifndef FORGOT_PASSWORD_H
#define FORGOT_PASSWORD_H

#include <QDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
namespace Ui {
class Forgot_Password;
}

class Forgot_Password : public QDialog
{
    Q_OBJECT

public:
    explicit Forgot_Password(QWidget *parent = nullptr);
    ~Forgot_Password();

private slots:
    void on_Reset_clicked();

private:
    Ui::Forgot_Password *ui;
};

#endif // FORGOT_PASSWORD_H
