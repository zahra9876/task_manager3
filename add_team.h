#ifndef ADD_TEAM_H
#define ADD_TEAM_H



#include <QDialog>
#include"team.h"




namespace Ui {
class Add_Team;
}

class Add_Team : public QDialog, public Team
{
    Q_OBJECT

public:
    explicit Add_Team(QWidget *parent = nullptr);
    ~Add_Team();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Add_Team *ui;
};

#endif // ADD_TEAM_H
