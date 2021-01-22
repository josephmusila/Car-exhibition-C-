#include "Building.h"

BuildingImp::BuildingImp(char Address,int numberOfFloors,double Area)
{
setBuildingInfo(Address,numberOfFloors,Area);

}

void BuildingImp::setBuildingInfo(char Address,int numberOfFloors,double Area){
    address=Address;
    numOfFloors=numberOfFloors;
    area=Area;
}
void BuildingImp::printInfo(){

cout<<"Address is :"<< address<<endl;
cout<<"Number of Floors: "<<numOfFloors<<endl;
cout<<"the area is: "<<area<<" square meters"<<endl;

}
