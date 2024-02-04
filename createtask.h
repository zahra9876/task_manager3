#ifndef CREATETASK_H
#define CREATETASK_H

#include <QDialog>
#include"task.h"
#include"task_managment.h"
namespace Ui {
class CreateTask;
}

class CreateTask : public QDialog,public Task,public TaskManager
{
    Q_OBJECT

public:
    explicit CreateTask(QWidget *parent = nullptr);
    ~CreateTask();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::CreateTask *ui;
};

#endif // CREATETASK_H
