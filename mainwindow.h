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

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_toolButton_archived_clicked();

    void on_DeleteArchive_clicked();

    void on_addArchive_clicked();

    void on_pushButton_5_clicked();

    void on_toolButton_6_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
