#ifndef DELETEORGANAZATION_H
#define DELETEORGANAZATION_H

#include <QDialog>
#include "organizationss.h"
#include "org_methods.h"

namespace Ui {
class DeleteOrganazation;
}

class DeleteOrganazation : public QDialog, public Organizationss , public Org_Methods
{
    Q_OBJECT

public:
    explicit DeleteOrganazation(QWidget *parent = nullptr);
    ~DeleteOrganazation();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DeleteOrganazation *ui;
};

#endif // DELETEORGANAZATION_H
