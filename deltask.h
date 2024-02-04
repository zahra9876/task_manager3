#ifndef DELTASK_H
#define DELTASK_H

#include <QDialog>
#include"task.h"
#include"task_managment.h"
namespace Ui {
class DelTask;
}

class DelTask : public QDialog,public Task,public TaskManager
{
    Q_OBJECT

public:
    explicit DelTask(QWidget *parent = nullptr);
    ~DelTask();

private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::DelTask *ui;
};

#endif // DELTASK_H
