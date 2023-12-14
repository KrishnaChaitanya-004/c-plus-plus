/* Write a c++ program for a class TIME with attributes hrs,mts, and secs for hours,
minutes, and seconds respectively. Have getTIME() member function to get input from
user and dispTIME() to display the time in the format hh:ss:mm (use setw). Also define
a member function called calcTIME(int) which gets the seconds value as input and
display the time in hours,minutes and seconds respectively.*/ 
#include<iostream>
using namespace std;
class Time
{
    protected:
    int hrs,mts,sec;
    public:
    long getTime()
    {
        cout<<"enter the seconds";
        long i;
        cin>>i;
        mts=0,hrs=0;
        return i;
    }
    void calTime(long i)
    {
        sec=(i%60);
        mts=(i/60);
        hrs=(mts/60);
        mts=mts-(hrs*60);
    }
    void disp()
    {
        cout<<"\nthe Time is: ";
        cout<<hrs<<":"<<mts<<":"<<sec;
    }
};
int main()
{
    long i;
    Time t;
    i=t.getTime();
    t.calTime(i);
    t.disp();
    return 0;
}
