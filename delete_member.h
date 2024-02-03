#ifndef DELETE_MEMBER_H
#define DELETE_MEMBER_H

#include <QDialog>
#include"organizationss.h"
namespace Ui {
class Delete_Member;
}

class Delete_Member : public QDialog,public Organizationss
{
    Q_OBJECT

public:
    explicit Delete_Member(QWidget *parent = nullptr);
    ~Delete_Member();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Delete_Member *ui;
};

#endif // DELETE_MEMBER_H
