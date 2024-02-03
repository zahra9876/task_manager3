#ifndef DELETEMEMBER_H
#define DELETEMEMBER_H

#include <QDialog>
#include <QString>
#include"organizationss.h"
namespace Ui {
class DeleteMember;
}

class DeleteMember : public QDialog,public Organizationss
{
    Q_OBJECT

public:
    explicit DeleteMember(QWidget *parent = nullptr);
    DeleteMember(QString dm){
        orgName=dm;
    };
    ~DeleteMember();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DeleteMember *ui;
    QString orgName;
};

#endif // DELETEMEMBER_H
