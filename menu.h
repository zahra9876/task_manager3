#ifndef MENU_H
#define MENU_H
#include <QWidget>
#include <QtCore/QCoreApplication>
#include <QObject>
#include <QDialog>
#include"dialog.h"
namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();
    Dialog* create_board;

private slots:
    void on_buttonBox_accepted();

    void on_pushButton_cb_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
