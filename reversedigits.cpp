/* Write a C++ program to print reverse digits of a given number, count the total number of
digits and sum of digits of a number using functions. Ask choice (1.reverse digit, 2.digit
count, 3.sum of digits) from the user. If the user enters a positive number, the program
will ask the user to enter a choice, otherwise, the program will be closed.*/
#include<iostream>
using namespace std;
int main ()
{
    long i;
    cout<<"enter the number";
    cin>>i;
    if(i<0)
    return 0;
    int j;
    cout<<"\n 1.reverse digits \n 2.digit count\n 3.sum of digits";
    cout<<"\nenter your choice: ";
    cin>>j;
    switch (j)
    {
    case 1:
       
       { int reverse=0;
        for ( i; i >0; i=i/10)
        {
            reverse=reverse*10+i%10;
        }
        cout<<"\nreverse "<<reverse;
        break;
       }
    case 2:
    {
         int digit_count=0;
        for ( i; i >0; i=i/10)
        {
            digit_count++;
        }
        cout<<"digit count "<<digit_count;
        break;
    }
    case 3:
       {
        int sum_of_digits=0;
        for ( i; i >0; i=i/10)
        {
            sum_of_digits=i%10+sum_of_digits;
        }
    cout<<"sum of digits "<<sum_of_digits;
        break;
       }
    default:
        cout<<"wrong input";
        break;
    }
    return 0;
}
