#ifndef MAIN_SHOW_H
#define MAIN_SHOW_H
#include <QDialog>

#include<QVector>
namespace Ui {
class Main_Show;
}

class Main_Show : public QDialog
{

    Q_OBJECT


private slots:


    void on_sing_up_clicked();

    void on_log_in_clicked();

    void on_pushButton_clicked();

public:
    explicit Main_Show(QWidget *parent = nullptr);
    ~Main_Show();

private:
    Ui::Main_Show *ui;
};

#endif // MAIN_SHOW_H
