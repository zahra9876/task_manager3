#ifndef EDITTASK_H
#define EDITTASK_H
#include"task.h"
#include"task_managment.h"
#include <QDialog>

namespace Ui {
class EditTask;
}

class EditTask : public QDialog,public Task,public TaskManager
{
    Q_OBJECT

public:
    explicit EditTask(QWidget *parent = nullptr);
    ~EditTask();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::EditTask *ui;
};

#endif // EDITTASK_H
