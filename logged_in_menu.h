#ifndef LOGGED_IN_MENU_H
#define LOGGED_IN_MENU_H

#include <QDialog>

namespace Ui {
class logged_in_menu;
}

class logged_in_menu : public QDialog
{
    Q_OBJECT

public:
    explicit logged_in_menu(QWidget *parent = nullptr);
    ~logged_in_menu();

private:
    Ui::logged_in_menu *ui;
};

#endif // LOGGED_IN_MENU_H
