#ifndef ADDMEMBER_TEAM_H
#define ADDMEMBER_TEAM_H

#include <QString>
#include <QWidget>
#include "team.h"

namespace Ui {
class AddMember_team;
}

class AddMember_team : public QWidget
{
    Q_OBJECT

public:
    explicit AddMember_team(QWidget *parent = nullptr);
    AddMember_team(QString _TeamName);
    ~AddMember_team();

private slots:

    void on_buttonBox_2_accepted();

private:
    Ui::AddMember_team *ui;
    QString TeamName;
};

#endif // ADDMEMBER_TEAM_H
