#ifndef EDITORGANIZATION_H
#define EDITORGANIZATION_H

#include <QDialog>
#include"organizationss.h"
namespace Ui {
class EditOrganization;
}

class EditOrganization : public QDialog,public Organizationss
{
    Q_OBJECT

public:
    explicit EditOrganization(QWidget *parent = nullptr);
    ~EditOrganization();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::EditOrganization *ui;
};

#endif // EDITORGANIZATION_H
