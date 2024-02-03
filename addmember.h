#ifndef ADDMEMBER_H
#define ADDMEMBER_H

#include <QDialog>
#include <QString>
#include"organizationss.h"

namespace Ui {
    class AddMember;

}
class AddMember : public QDialog,Organizationss
{

    Q_OBJECT

public:
    explicit AddMember(QWidget *parent = nullptr);
    AddMember(QString _orgName);
    void setName( QString _orgName){
        orgName=_orgName;
    }
    ~AddMember();

private slots:

    void on_buttonBox_2_accepted();

    void on_buttonBox_2_rejected();

private:
    Ui::AddMember *ui;
    QString orgName;
};

#endif // ADDMEMBER_H
