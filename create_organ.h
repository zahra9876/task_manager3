#ifndef CREATE_ORGAN_H
#define CREATE_ORGAN_H

#include <QDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QMainWindow>
namespace Ui {
class create_organ;
}

class organization
{
private:
    QString organ_name;
public:
    void set_name(QString n){
        organ_name=n;
    }
    QString get_name(){
        return organ_name;
    }
    void save_to_file()
    {
        QFile file("organization.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                   QTextStream out(&file);
                   out << "Organization: " << get_name() << "\n";
                   file.close();
               }
    }
};

class create_organ : public QDialog
{
    Q_OBJECT

public:
    explicit create_organ(QWidget *parent = nullptr);
    ~create_organ();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_buttonBox_accepted();
signals:
    void item_added(QString);
private:
    Ui::create_organ *ui;
};

#endif // CREATE_ORGAN_H
