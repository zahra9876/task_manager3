#ifndef ADDTASKTEAM_H
#define ADDTASKTEAM_H

#include <QDialog>

namespace Ui {
class AddTaskTeam;
}

class AddTaskTeam : public QDialog
{
    Q_OBJECT

public:
    explicit AddTaskTeam(QWidget *parent = nullptr);
    ~AddTaskTeam();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::AddTaskTeam *ui;
};

#endif // ADDTASKTEAM_H
