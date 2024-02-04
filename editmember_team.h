#ifndef EDITMEMBER_TEAM_H
#define EDITMEMBER_TEAM_H

#include <QWidget>

namespace Ui {
class EditMember_team;
}

class EditMember_team : public QWidget
{
    Q_OBJECT

public:
    explicit EditMember_team(QWidget *parent = nullptr);
    EditMember_team(QString edname)
    {
        TeamName = edname;
    }
    ~EditMember_team();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::EditMember_team *ui;
    QString TeamName;
};

#endif // EDITMEMBER_TEAM_H
