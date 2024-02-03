#include "organization.h"
#include "users.h"
Organization::Organization(QString name, QString description)
{
    this->name = name;
    this->description = description;

}
void Organization::setName(const QString s)
{
    name = s;
}

QString Organization::getName() const
{
    return name;
}

void Organization::setDescription(const QString s)
{
    name = s;
}

QString Organization::getDescription() const
{
    return name;
}

void Organization::addMember(Users member, OrganizationRoles role) {
    members.append(member);
    memberRoles.append(role);

}

void Organization::removeMember(Users member) {

    for (auto it = members.begin(); it != members.end(); ++it)
    {
        if (*it == member)
        {
            members.erase(it);
            break;
        }
    }

}

void Organization::updateMemberRole(Users member, OrganizationRoles newRole) {
    int index = members.indexOf(member);

    if(index != -1) {
    memberRoles[index] = newRole;
    }

}
