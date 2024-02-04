#include "addtasktoorg.h"
#include "mainwindow.h"
#include "ui_addtasktoorg.h"
#include<QFile>
#include<QMessageBox>
AddTaskToOrg::AddTaskToOrg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTaskToOrg)
{
    ui->setupUi(this);
}

AddTaskToOrg::~AddTaskToOrg()
{
    delete ui;
}

void AddTaskToOrg::on_buttonBox_accepted()
{
    QString task = ui->lineEdit->text();
    QString organize =ui->lineEdit_2->text();
    QString taskFileName = "Tasks.txt";
        QString newFileName = organize + "_" + task + ".txt";

        QFile taskFile(taskFileName);
        QFile newFile(newFileName);

        if (!taskFile.open(QIODevice::ReadOnly | QIODevice::Text))
            return;

        if (!newFile.open(QIODevice::WriteOnly | QIODevice::Text))
            return;

        QTextStream in(&taskFile);
        QTextStream out(&newFile);

        bool taskFound = false;

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList dataParts = line.split("=");

            QString currentTaskName = dataParts[0].trimmed();

            if (currentTaskName == task) {
                out << line << "\n";
                taskFound = true;
            }
        }

        taskFile.close();
        newFile.close();

        if (!taskFound) {
            // Display error message if task not found
            QMessageBox::critical(this, "Search Task", "The specified task was not found.");
            return;
        }

        // Display success message
        QMessageBox::information(this, "Search Task", "The task has been successfully moved.");

}




void AddTaskToOrg::on_buttonBox_rejected()
{
    MainWindow *md=new MainWindow();
    md->show();
    hide();

}

