#ifndef ADDARCH_H
#define ADDARCH_H

#include <QDialog>
#include"task_managment.h"
namespace Ui {
class AddArch;
}

class AddArch : public QDialog,public TaskManager
{
    Q_OBJECT

public:
    explicit AddArch(QWidget *parent = nullptr);
    ~AddArch();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::AddArch *ui;
};

#endif // ADDARCH_H
