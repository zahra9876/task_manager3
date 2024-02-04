#ifndef DELETE_TEAM_H
#define DELETE_TEAM_H

#include <QDialog>
#include"team.h"


namespace Ui {
class Delete_Team;
}

class Delete_Team : public QDialog,public Team
{
    Q_OBJECT

public:
    explicit Delete_Team(QWidget *parent = nullptr);
    ~Delete_Team();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Delete_Team *ui;
};

#endif // DELETE_TEAM_H
