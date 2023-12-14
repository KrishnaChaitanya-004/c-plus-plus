/*Write a program to calculate simple interest using function. The
function should accept the principle amount, interest rate and
number of years as parameters and return the total amount.
Default value for the interest rate is 7.5%. Demonstrate the
simple interest calculation (with and without using default*/

#include<iostream>
#include <iomanip>
using namespace std;
void simple(int princple,int years,float interest=7.5)
{
    float simple=(princple*years*static_cast<float>(interest))/100;
    cout<<"simple intrest"<<fixed << setprecision(2) <<simple;
}
int main()
{
    int princple,years;
    float rate;
    cout<<"\nenter the princple amount";
    cin>>princple;
    cout<<"\nenter the no of years";
    cin>>years;
    char a;
    cout<<"\nwould you like to enter intrest rate";
    cout<<"(orwould you like to go with default rate)";
    cout<<"type y or n: ";
    cin>>a;
    if (a == 'y' || a == 'Y') 
    {
    cout << "Enter the interest rate: ";
    cin >> rate;
    simple(princple,years,rate);
    }
    else
    simple(princple,years);
    return 0;
}
