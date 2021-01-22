#include "CarExpImp.h"
#include "Building.h"
CarExpImp::CarExpImp()
{
    numberOfCars=0;
}
//CarExpImp::CarExpImp(char Address,string Type,int numberOfFloors,double Area,string Name,string Nationality,int Age,char Gender,int maxNumOfcars,string name){

//};
int CarExpImp::getMaxNumOfCars(){
    return maxNumOfcars;
}
int CarExpImp::getNumOfcars(){
    return sizeof(Car);
}
bool CarExpImp::isEmpty(){
    if(sizeof(Car)==0)
    {
        return true;
    }else
    {
        return false;
    }
};
bool CarExpImp::isFull()
{
    if(numberOfCars==maxNumOfcars)
    {
        return true;
    }else{
        return false;
    }
};

void CarExpImp::insertcar(){

    Car Car1;
    Car1.type="Toyota";
    Car1.color="Black";
    Car1.year=2010;
    Car1.price=13000;

     Car Car2;
    Car2.type="BMW";
    Car2.color="Silver";
    Car2.year=2012;
    Car2.price=30000;

     Car Car3;
    Car3.type="Ferrari";
    Car2.color="Red";
    Car1.year=2011;
    Car1.price=50000;


};
double CarExpImp::allCaePrices(){

}
