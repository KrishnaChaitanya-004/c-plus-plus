/*Write a C++ program for calculating the perimeter of the shapes square, rectangle,
triangle and trapezoid using overloading of functions. If the necessary arguments are not
passed during the function call, let the functions get executed with default arguments.
(fix any default values)*/
#include<iostream>
using namespace std;
void peri(int a)
{
    cout<<"\nsquare perimeter"<<(4*a);
}
void peri(double a,int b=0)
{
    cout<<"\nrectangle perimeter"<<(2*(a+b));
}
void peri(int a,double b,int c=5)
{
    cout<<"\ntriangle perimeter"<<(a+b+c);
}
void peri(int a,int b,double c,int d=5)
{
    cout<<"\ntrapezoid perimeter"<<(a+b+c+d);
}
int main()
{
    peri(2);
    peri(2.0);
    peri(2,3.0,4);
    peri(2,3,4.0,5);
    return 0;
}
