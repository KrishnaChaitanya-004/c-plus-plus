/* Create four-functions to compute fractions. Here are the formulas for the four arithmetic
operations applied to fractions.
Addition:
a/b+c/d=(a*d+b*c)/b*d
Subtraction:
a/b+c/d=(a*d-b*c)/b*d
Multiplication:
a/b*c/d=(a*c)/(b*d)
Division:
a/b / c/d=(a*d)/(b*c)
The user has to choose the option either add or sub or mult or div. The program should
then display the result by calling the respective function and repeat this process until the
user given stop option.
*/
#include<iostream>
using namespace std;
int main ()
{
    long a,b,c,d;
    cout<<"enter the numbers a,b,c,d respectively: ";
    cin>>a>>b>>c>>d;
    int j;
    char i='y';
    cout<<"\n1.addition: a/b+c/d=(a*d+b*c)/b*d\n2.Subtraction: a/b-c/d=(a*d-b*c)/b*d";
    cout<<"\n3.Multiplication: a/b*c/d=(a*c)/(b*d)\n4.Division: a/b / c/d=(a*d)/(b*c)";
   do
   {    
        cout<<"\nenter your choice: ";
        cin>>j;
        switch (j)
        {
        case 1:
        
        {
            double add=static_cast<double>(a*d+b*c)/(b*d);
            cout<<"\naddition: "<<add;
            break;
        }
        case 2:
        {
            double sub=static_cast<double>(a*d-b*c)/(b*d);
            cout<<"\nSubtraction: "<<sub;
            break;
        }
        case 3:
        {
            double mul=static_cast<double>(a*c)/(b*d);
            cout<<"\nMultiplication: "<<mul;
            break;
        }
        case 4:
        {
            double div=static_cast<double>(a*d)/(b*c);
            cout<<"\nDivision: "<<div;
            break;
        }
        default:
            cout<<"\nwrong input";
            break;
        }
        cout<<"\nrepeat this process press y or Y\n Else press n or N: ";
        cin>>i;
   }while (i=='Y'||i=='y');
   
return 0;
}
