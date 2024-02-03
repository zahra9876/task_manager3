#include "team.h"

Team::Team(const QString& name, const QString& role)
    : name(name), role(role)
{
}
Team::Team()
{
}
void Team::addMember(const QString& member)
{
    members.append(member);
}

void Team::removeMember(const QString& member)
{
    int index = members.indexOf(member);
    if(index != -1) {
      members.remove(index, member.length() + 1);
      membersRoles.remove(index, 2);}
}
void Team::changeMemberRole(const QString &member, const bool &newRole){
    int index = members.indexOf(member);
    if(index != -1) {

      if(newRole) {
        membersRoles.replace(index, 1, "1");
      } else {
        membersRoles.replace(index, 1, "0");
      }
    }
}
