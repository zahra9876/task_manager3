#include "organizationss.h"
#include<QFile>
#include <iostream>
#include <fstream>
using namespace std;
Organizationss::Organizationss(const QString &n, const QString &des)
{
  name = n;
  description = des;
}

void Organizationss::setName( const QString &_name)
{
  name = _name;
}

QString Organizationss::getName() const
{
  return name;
}

void Organizationss::setDescription(const QString &_description)
{
  description = _description;
}
void Organizationss::saveMToFile()  {
   QString ecp = getName() +"Team"+ ".txt";
   // string filename = "memberInfo.txt";
  string filename = ecp.toStdString();
  std::ofstream file(filename, std::ios::app);

  if (file.is_open()) {
      for (const auto &mem : teams)
      file << "Name: " << mem.getName().toStdString() << std::endl;
      for (const auto &mem :teams)
      file << "Task: " << mem.getRole().toStdString()<< std::endl;
      file.close();
      std::cout << "Attributes appended to file: " << filename << std::endl;
  } else {
      std::cerr << "Error opening file: " << filename << std::endl;
  }
}
void Organizationss::saveToFile()  {

    QString fileName = getName() + "Members.txt";

      QFile file(fileName);
      if(!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
         return;
      }

      QTextStream out(&file);
       for(int i=0; i< getMember().size();i++){

        out << getMember().at(i) << "=" << (getRoles().at(i)) << "\n" ;
      }

      file.close();
}
void Organizationss::readFromFile() {


}
QString Organizationss::getDescription() const
{
  return description;
}
void Organizationss::addroles(const QString &m_role){
    if(m_role=="1"){
        isAdmin +="1";
    }
    else{
        isAdmin +="0";
    }

}

void Organizationss::addMember(const QString &_member)
{

       members += _member + ",";

}




void Organizationss::removeMember(const QString &m_members)
{
    int index = members.indexOf(m_members);
    if(index != -1) {
      members.remove(index, m_members.length() + 1);
      isAdmin.remove(index, 2);
    }
}

std::vector<QString> Organizationss::getRoles()  {

    std::vector<QString> rolesVector;

    for(int i=0; i<isAdmin.size(); i++) {

      if(isAdmin[i] == '1') {
        rolesVector.push_back("1");
      }
      else {
        rolesVector.push_back("0");
      }

    }

    return rolesVector;



}
std::vector<QString>  Organizationss::getMember()
{
    std::vector<QString> membersVector;
        QStringList memberList = members.split(',', Qt::SkipEmptyParts);
        for (const auto& member : memberList) {
            membersVector.push_back(member.trimmed());
        }
        return membersVector;
}
void Organizationss::updateMemberRole(const QString &member, bool newRole)
{
  int index = members.indexOf(member);
  if(index != -1) {

    if(newRole) {
      isAdmin.replace(index, 1, "1");
    } else {
      isAdmin.replace(index, 1, "0");
    }
  }
}
void Organizationss::addTeam(Team team){
    bool exists = false;
    for(int i=0; i<teams.size(); i++) {
      if(teams[i].getName() == team.getName()) {
        exists = true;
        break;
      }
    }

    if(!exists) {
      teams.push_back(team);

      QStringList members = team.getMembers().split(",");
      for(int i=0; i<members.size(); i++) {
        addMember(members[i]);
      }
    }
  }
