#ifndef EDITORGANIZATION_H
#define EDITORGANIZATION_H

#include <QDialog>
#include "organizationss.h"
#include"org_methods.h"
namespace Ui {
class EditOrganization;
}

class EditOrganization : public QDialog,public Organizationss, public Org_Methods
{
    Q_OBJECT

public:
    explicit EditOrganization(QWidget *parent = nullptr);
    ~EditOrganization();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::EditOrganization *ui;
};

#endif // EDITORGANIZATION_H
