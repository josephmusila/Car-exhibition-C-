#ifndef BUILDINGIMP_H
#define BUILDINGIMP_H
#include <iostream>

using namespace std;


class BuildingImp
{
private:

        string address;
        int numOfFloors;
        double area;


    public:
        BuildingImp();
      BuildingImp(char Address,int numberOfFloors,double Area);
      void setBuildingInfo(char Address,int numberOfFloors,double Area);

      void printInfo();

};

#endif // BUILDINGIMP_H
