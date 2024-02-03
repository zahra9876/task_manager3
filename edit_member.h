#ifndef EDIT_MEMBER_H
#define EDIT_MEMBER_H

#include <QDialog>
#include <QString>
#include"organizationss.h"


namespace Ui {
class Edit_Member;
}

class Edit_Member : public QDialog
{
    Q_OBJECT

public:
    explicit Edit_Member(QWidget *parent = nullptr);
    Edit_Member(QString ed){
        orgName=ed;
    };
    void setName( QString _orgName){
        orgName=_orgName;
    }
    ~Edit_Member();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Edit_Member *ui;
    QString orgName;
};

#endif // EDIT_MEMBER_H
