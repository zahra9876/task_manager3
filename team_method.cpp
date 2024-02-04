#include "team_method.h"
#include<QFile>
#include<fstream>
#include<iostream>

    team_method::team_method()
    {

    }

    void team_method::AddTeam(const QString &TeamName, const QString &TeamDesc)
    {
        QFile file("Teams.txt");
        if (!file.open(QIODevice::Append | QIODevice::Text)) {
            return;
        }
        QTextStream out(&file);
        out<<TeamName<<"="<<TeamDesc<<"\n";

        file.close();
    }

    void team_method::DeleteTeam(const QString &TeamName)
    {
        QFile file("Team.txt");
        if (!file.open(QIODevice::ReadWrite | QIODevice::Text)) {
            return;
        }
        QString F_Data;
        QTextStream in(&file);
        bool found = false;

        while(!in.atEnd()){
            QString line = in.readLine();
            QStringList data = line.split("=");
            QString name = data[0];
            if(line != TeamName) {
                F_Data += line + "\n";

            }
            else {
                found = true;
            }
        }
        if(found){
            QString membersFileName = TeamName + "Members.txt";
            QFile membersFile(membersFileName);
            membersFile.remove();
            QTextStream out(&file);
            out << F_Data;
        }

        file.close();
    }


    void team_method::EditTeam(const QString &TeamName, const QString &NewDesc)
    {
        QFile file("Team.txt");
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

            if (name == TeamName) {
                line = name + "=" + NewDesc;
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

