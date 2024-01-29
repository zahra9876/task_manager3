#ifndef USERS_H
#define USERS_H

#include <string>
#include <QString>
class Users
{
public:
    Users();
    void setUsername(QString);
    void setName(QString);
    void setEmail(QString s);
    void setAge(int x);
    void setGender(int x);
    void setPassword(QString s);
    QString getUsername();
    QString getName();
    QString getEmail();
    int getAge();
    int getGender();
    QString getPassword();
private:
    QString username;
    QString name;
    QString email;
    QString password;
    unsigned int age;
    unsigned gender;
};

#endif // USERS_H
