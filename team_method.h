#ifndef TEAM_METHOD_H
#define TEAM_METHOD_H
#include<QString>
#include<QTextStream>

class team_method
{
public:
    team_method();

    void AddTeam(const QString &TeamName, const QString &TeamDesc);
    void DeleteTeam(const QString &TeamName);
    void EditTeam(const QString &TeamName, const QString &TeamDesc);
};

#endif // TEAM_METHOD_H
