#ifndef TEAM_MANAGMENT_H
#define TEAM_MANAGMENT_H

#include <QDialog>

namespace Ui {
class Team_Managment;
}

class Team_Managment : public QDialog
{
    Q_OBJECT

public:
    explicit Team_Managment(QWidget *parent = nullptr);
    ~Team_Managment();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Team_Managment *ui;
};

#endif // TEAM_MANAGMENT_H
