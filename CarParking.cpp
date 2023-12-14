/*Create a class called CarParking that has data members – car
_id (int), Rate (float) and Duration(int). Include two member functions - (i) to take input and (ii)
calculate charges and show the result*/
#include<iostream>
using namespace std;
class car
{
    protected:
    long car_id;
    float rate;
    int duriation;
    public:
    void cardata()
    {
        cout<<"\nenter the car id: ";
        cin>>car_id;
        cout<<"\nenter the cost per hour for parking: ";
        cin>>rate;
        cout<<"\nenter the time duration: ";
        cin>>duriation;
    }
    void calccharges()
    {
        cout<<"\ntotal cost: "<<(rate*duriation);
    }
};
int main()
{
    car a;
    a.cardata();
    a.calccharges();
}
