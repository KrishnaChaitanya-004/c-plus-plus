/*Overload the function COMPUTE three times, to calculate the circumference of the
circle (2*pi*rad), area of the circle (pi*rad*rad), and volume of the
cylinder(pi*rad*rad*height) by fixing pi value as the default parameter. Return the
calculated value to the main and print.*/
#include <iostream>
#include<iomanip>
using namespace std;

double compute(int rad, double pi = 3.14) 
{
    return (2 * pi * rad);
}

double compute(double rad, double pi = 3.14) 
{
    return (pi * rad * rad);
}

double compute(int height, int rad, double pi = 3.14)
{
    return (pi * rad * rad * height);
}

int main()
{
    int rad, height;
    cout << "Enter the radius: ";
    cin >> rad;
    double d=static_cast<double>(rad);
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    double circumference = compute(rad);
    cout << "Circumference of the circle: " << circumference << endl;
    double area = compute(d);
    cout << "Area of the circle: " <<fixed<<setprecision(2)<< area << endl;
    double volume = compute(height, rad);
    cout << "Volume of the cylinder: " <<fixed<<setprecision(2)<< volume << endl;

    return 0;
}
