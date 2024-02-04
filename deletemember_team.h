#ifndef DELETEMEMBER_TEAM_H
#define DELETEMEMBER_TEAM_H
#include"team.h"
#include <QWidget>
#include<QString>

namespace Ui {
class deletemember_team;
}

class deletemember_team : public QWidget
{
    Q_OBJECT

public:
    explicit deletemember_team(QWidget *parent = nullptr);
    deletemember_team(QString DM)
    {
        TeamName=DM;
    };
    ~deletemember_team();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::deletemember_team *ui;
    QString TeamName;
};

#endif // DELETEMEMBER_TEAM_H
