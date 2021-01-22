#ifndef CAREXPIMP_H
#define CAREXPIMP_H
#include <iostream>

using namespace std;
#include "Building.h"
#include "PersonImp.h"
class CarExpImp :public BuildingImp,public PersonImp
{
    public:
         CarExpImp();
         struct Car{
        string type;
       string color;
       int year;
       double price;
         };
        string name;


       int numberOfCars;
       int maxNumOfcars;

       CarExpImp(char Address,int numberOfFloors,double Area,string Name,string Nationality,int Age,char Gender,int maxNumOfcars,string name);
       int getMaxNumOfCars();
       int getNumOfcars();
       bool isFull();
       bool isEmpty();
       void insertcar();
       void printAllcars();
       double allCaePrices();
       void searchCarPrice();
       void printInfo();
};

#endif // CAREXPIMP_H
