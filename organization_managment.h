#ifndef ORGANIZATION_MANAGMENT_H
#define ORGANIZATION_MANAGMENT_H

#include <QDialog>
#include"organizationss.h"
namespace Ui {
class Organization_Managment;
}

class Organization_Managment : public QDialog, public Organizationss
{
    Q_OBJECT

public:
    explicit Organization_Managment(QWidget *parent = nullptr);
    ~Organization_Managment();

private slots:
    void on_toolButton_clicked();



    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Organization_Managment *ui;
};

#endif // ORGANIZATION_MANAGMENT_H
