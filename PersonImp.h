#ifndef PERSONIMP_H
#define PERSONIMP_H
#include <iostream>

using namespace std;

class PersonImp
{
     private:
         string name;
         string nationality;
         int age;
         char gender;
    public:
        PersonImp();
        PersonImp(string Name,string Nationality,int Age,char Gender);
        void setPersonInfo(string Name,string Nationality,int Age,char Gender);
        void printInfo();




};

#endif // PERSONIMP_H
