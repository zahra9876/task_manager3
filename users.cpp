#include "users.h"

Users::Users()
{

}
void Users::setUsername(QString s){
    username=s;
}
void Users::setName(QString s){
    name=s;
}
void Users::setEmail(QString s){
    email=s;
}
void Users::setPassword(QString s){
    password=s;
}
void Users::setAge(int x){
    age=x;
}
void Users::setGender(int x){
    gender=x;
}
QString Users::getUsername(){
    return username;
}
QString  Users::getName(){
    return name;
}
QString  Users::getEmail(){
    return email;
}
QString  Users::getPassword(){
    return password;
}
int Users::getAge(){
    return age;
}
int Users::getGender(){
    return gender;
}

