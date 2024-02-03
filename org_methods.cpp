#include "org_methods.h"
#include<QFile>
#include <iostream>
#include <fstream>
 Org_Methods::Org_Methods()
{

}
void Org_Methods::addOrganization(const QString& orgName, const QString& orgDescription)
{
    QString fileName = "organizations.txt";

    QFile file(fileName);
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        return;
    }

    QTextStream out(&file);
    out << orgName << "=" << orgDescription << "\n";

    file.close();
}

void Org_Methods::deleteOrganization(const QString& orgName)
{
    QString fileName = "organizations.txt";

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

        if (name != orgName) {
            fileData += line + "\n";
        } else {
            found = true;
        }
    }

    if (found) {
        file.resize(0);
        QTextStream out(&file);
        out << fileData;
    }
    if (found) {
           // حذف فایل "Teams.txt"
           QString teamsFileName = orgName + "Teams.txt";
           QFile teamsFile(teamsFileName);
           teamsFile.remove();

           // حذف فایل "Members.txt"
           QString membersFileName = orgName + "Members.txt";
           QFile membersFile(membersFileName);
           membersFile.remove();
       }
}

void Org_Methods::editOrganizationDescription(const QString& orgName, const QString& newDescription)
{
    QString fileName = "organizations.txt";

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

        if (name == orgName) {
            line = name + "=" + newDescription;
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
