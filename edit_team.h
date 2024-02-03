#ifndef EDIT_TEAM_H
#define EDIT_TEAM_H

#include <QDialog>
#include"team.h"
namespace Ui {
class Edit_Team;
}

class Edit_Team : public QDialog,public Team
{
    Q_OBJECT

public:
    explicit Edit_Team(QWidget *parent = nullptr);
    ~Edit_Team();

private slots:
    void on_buttonBox_2_accepted();

private:
    Ui::Edit_Team *ui;
};

#endif // EDIT_TEAM_H
