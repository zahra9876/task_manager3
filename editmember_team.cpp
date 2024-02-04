#include "editmember_team.h"
#include "ui_editmember_team.h"
#include <QFile>
EditMember_team::EditMember_team(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditMember_team)
{
    ui->setupUi(this);
}

EditMember_team::~EditMember_team()
{
    delete ui;
}

void EditMember_team::on_buttonBox_accepted()
{
    QString member = ui->lineEdit->text();
        QString role = ui->comboBox->currentText();
        QString fileName = TeamName + "Members.txt";

        QFile file(fileName);
        if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
            return;
        }

        QString fileData;
        QTextStream in(&file);
        bool found = false;

        while (!in.atEnd()) {
            QString line = in.readLine();
            QStringList data = line.split("=");
            QString name = data[0];

            if (name == member) {
                line = name + "=" + role;
                found = true;
            }

            fileData += line + "\n";
        }

        if (found) {
            file.resize(0);
            QTextStream out(&file);
            out << fileData;
        }

        file.close();
}

