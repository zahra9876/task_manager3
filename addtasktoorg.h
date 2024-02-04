#ifndef ADDTASKTOORG_H
#define ADDTASKTOORG_H

#include <QDialog>

namespace Ui {
class AddTaskToOrg;
}

class AddTaskToOrg : public QDialog
{
    Q_OBJECT

public:
    explicit AddTaskToOrg(QWidget *parent = nullptr);
    ~AddTaskToOrg();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddTaskToOrg *ui;
};

#endif // ADDTASKTOORG_H
