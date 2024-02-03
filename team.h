#ifndef TEAM_H
#define TEAM_H

#include<QString>
#include<QVector>
class Team
{

public:
    Team(const QString& name, const QString& role);
    Team();
    void addMember(const QString& member);
    void removeMember(const QString& member);
    void changeMemberRole(const QString& member, const bool& newRole);



    QString getName() const {
        return name;
    }


    void setName(const QString& newName) {
        name = newName;
    }


    QString getRole() const {
        return role;
    }


    void setRole(const QString& newRole) {
        role = newRole;
    }

    QString getMembers() const {
        return members;
    }


    void setMembers(const QString& newMembers) {
        members += newMembers + ",";
    }

    // Getter برای فیلد membersRoles
    QString getMembersRoles() const {
        return membersRoles;
    }

    // Setter برای فیلد membersRoles
    void setMembersRoles(const QString& newMembersRoles) {
        if(newMembersRoles=="1"){
            membersRoles +="1";
        }
        else{
            membersRoles +="0";
        }
    }

private:
    QString name;
    QString role;
    QString members;
    QString membersRoles;
};
//QVector<Team> teamize;
#endif // TEAM_H
