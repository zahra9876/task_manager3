#ifndef DELETEORGANAZATION_H
#define DELETEORGANAZATION_H

#include <QDialog>
#include"organizationss.h"
namespace Ui {
class DeleteOrganazation;
}

class DeleteOrganazation : public QDialog, public Organizationss
{
    Q_OBJECT

public:
    explicit DeleteOrganazation(QWidget *parent = nullptr);
    ~DeleteOrganazation();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DeleteOrganazation *ui;
};

#endif // DELETEORGANAZATION_H
