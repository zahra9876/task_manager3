#ifndef SHOWMENUE_H
#define SHOWMENUE_H

#include <QDialog>

namespace Ui {
class ShowMenue;
}

class ShowMenue : public QDialog
{
    Q_OBJECT

public:
    explicit ShowMenue(QWidget *parent = nullptr);
    ~ShowMenue();

private:
    Ui::ShowMenue *ui;
};

#endif // SHOWMENUE_H
