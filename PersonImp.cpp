#include "PersonImp.h"

PersonImp::PersonImp(string Name,string Nationality,int Age,char Gender)
{
    setPersonInfo(Name,Nationality,Age,Gender);
}
void PersonImp::setPersonInfo(string Name,string Nationality,int Age,char Gender){
    name=Name;
    nationality=Nationality;
    age=Age;
    gender=Gender;
};
void PersonImp::printInfo(){
    cout<<"The name is: "<<name<<endl;
    cout<<"The Nationality is: "<<nationality<<endl;
    cout<<"The Age is: "<<age<<" years"<<endl;
    cout<<"The Gender is: "<<gender<<endl;

}
