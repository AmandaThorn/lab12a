#include <iostream>
#include <string>
#include "chair.h"
using namespace std;



chair::chair()
{
  
}
chair ::chair(int n, bool r, string m)
{
  numOfLegs = n;
  rolling = r;
  material = m;
}

