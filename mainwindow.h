#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_actionsee_organizations_triggered();

    void on_actionadd_organization_triggered();

    void on_actionremove_orgenization_triggered();

    void on_actionedit_Organization_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
