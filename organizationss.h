#ifndef ORGANIZATIONSS_H
#define ORGANIZATIONSS_H

#include "team.h"
#include <QString>
#include <QVector>
#include<QMessageBox>
class Organizationss
{
private:

    QString name;
    QString description;
    QString members;
    QString isAdmin;
    std::vector<Team> teams;

public:
     void addTeam(Team team);
    Organizationss(){};
    Organizationss(const QString &name,const QString &_description);
    void setName(const QString &name);
    QString getName()const;
    void setDescription(const QString &_description);
    QString getDescription()const;
    void addMember( const QString &neme);
    std::vector<QString> getMember();
    void addroles( const QString &m_role);
    std::vector<QString> getRoles();
    void readFromFile();
    void removeMember(const QString &memberName);
     void saveToFile();
     void saveMToFile();
    void updateMemberRole(const QString &neme,bool newRole);





};

//QVector<Organizationss> organize;

#endif // ORGANIZATIONSS_H
