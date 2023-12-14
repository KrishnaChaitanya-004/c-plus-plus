/*Write an inline function called negtopos() that accepts an int argument by reference and
changes the number to positive, if it is negative. Write a main() program to test this function*/
#include<iostream>
using namespace std;
void negtopos(long &a);
int main()
{
    long a;
    cout<<"enter the number";
    cin>>a;
    negtopos(a);
}
void negtopos(long &a)
{
 if(a<0)
    cout<<"\nnegtopos: "<<(-a);
else
   cout<<"\nnegtopos: "<<(a);
}
