#ifndef ADDMEMBER_H
#define ADDMEMBER_H

#include <QDialog>
#include <QString>
#include"organizationss.h"
namespace Ui {
    class AddMember;

}
class AddMember : public QDialog
{

    Q_OBJECT

public:
    explicit AddMember(QWidget *parent = nullptr);
    AddMember(QString _orgName);
    ~AddMember();

private slots:

    void on_buttonBox_2_accepted();

private:
    Ui::AddMember *ui;
    QString orgName;
};

#endif // ADDMEMBER_H
