#include <iostream>
#include<map>
using namespace std;
#include "Building.h"
#include "PersonImp.h"
#include "CarExpImp.h"

int main()
{
//question1
  BuildingImp building1('A',758,85.95);

  building1.printInfo();

  cout<<"_______________________________"<<endl;
  //question 2

  PersonImp person1("Alex","Russian",90,'M');
  person1.printInfo();
  cout<<"_______________________________"<<endl;

  //question 3


    return 0;
}
