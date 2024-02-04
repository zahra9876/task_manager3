#ifndef DELETETASK_H
#define DELETETASK_H

#include<QDialog>
#include"task.h"
#include"task_managment.h"
namespace Ui {
class DelitTask;
}

class DelitTask : public QDialog,public Task,public TaskManager
{
    Q_OBJECT

public:
    explicit DelitTask(QWidget *parent = nullptr);
    ~DelitTask();

private:
    Ui::DelitTask *ui;
};

#endif // DELETETASK_H
