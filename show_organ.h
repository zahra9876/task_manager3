#ifndef SHOW_ORGAN_H
#define SHOW_ORGAN_H

#include <QWidget>

namespace Ui {
class show_organ;
}

class show_organ : public QWidget
{
    Q_OBJECT

public:
    explicit show_organ(QWidget *parent = nullptr);
    ~show_organ();

private:
    Ui::show_organ *ui;
};



#endif // SHOW_ORGAN_H
