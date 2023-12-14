/*Find the absolute value for int, float, and double datatypes by illustrating compile time
polymorphism (overloading) and inline function.*/
#include <iostream>
using namespace std;
int abs(int num) 
{
  return (num < 0) ? -num : num;
}

float abs(float num) 
{
  return (num < 0.0) ? -num : num;
}

double abs(double num) 
{
  return (num < 0.0) ? -num : num;
}

int main() 
{
  int a = -5;
  float b = -2.5;
  double c = -7.8;
  cout << abs(a) << endl; 
  cout << abs(b) << endl; 
  cout << abs(c) << endl; 

  return 0;
}
