#ifndef ADD_ORGENIZATION_H
#define ADD_ORGENIZATION_H
#include"org_methods.h"

#include <QDialog>
#include"organizationss.h"


namespace Ui {
class add_orgenization;
}

class add_orgenization : public QDialog,public Organizationss,public Org_Methods
{
    Q_OBJECT

public:
    explicit add_orgenization(QWidget *parent = nullptr);
    ~add_orgenization();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::add_orgenization *ui;
};

#endif // ADD_ORGENIZATION_H
