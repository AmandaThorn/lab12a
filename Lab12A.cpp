#include <iostream>
#include "chair.h"
using namespace std;

int main() {
  bool rolln = false;
  int legs = 4;
  string mat = " ";
  
  

  cout << "You are about to create a chair. \n";
  cout << "How many legs does your chair have: ";
  cin >> legs;
  cout<< "Is your chair rolling (true/false): ";
  cin >> boolalpha >>rolln;
  cout<<"What is your chair made of: ";
  cin >> mat;
  chair c1(legs,rolln,mat);

  if (c1.rolling)
  {
    cout<< "\n You chair has "<<c1.numOfLegs<< " legs, is rolling, and is made of "<< c1.material<<"\n";
  }
  else if (!c1.rolling)
  {
    cout<< "\n You chair has "<<c1.numOfLegs<< " legs, is not rolling, and is made of "<< c1.material << "\n";
  }
  cout << "\n this program is going to change that.\n\n";

  c1.numOfLegs = 4;
  c1.material = "wood";
  c1.rolling = false;

  cout<< "You chair has "<<c1.numOfLegs<< " legs, is not rolling, and is made of "<< c1.material;
  
  
    
  
  
  
}
