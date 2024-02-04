#ifndef DELARCH_H
#define DELARCH_H
#include"task_managment.h"
#include <QDialog>

namespace Ui {
class DelArch;
}

class DelArch : public QDialog,public TaskManager
{
    Q_OBJECT

public:
    explicit DelArch(QWidget *parent = nullptr);
    ~DelArch();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DelArch *ui;
};

#endif // DELARCH_H
