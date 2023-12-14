/*Create a class with X1, X2 and Y1, Y2 as integer data members and two member
functions. The first member function getdata() may be used to read the X and Y
values and calcdist() to find the distance between two points. Let the calcdist() may
return the result to the main function block. If the Euclidean distance is less than 5
then using loop read the (i.e call getdata()) again and then supply the inputs. Finally
print the results in the main function as where the answer is returned.
(15 marks)
Euclidean distance d = √[ (X2 – X1)2 + (Y2 – Y1)2]*/
#include<iostream>
#include<cmath>
using namespace std;
class Distance
{
    double x1, x2, y1, y2;
        public:
        void getdata()
        {
            cout << "\nenter first point co-ordinates: ";
            cin >> x1 >> y1;
            cout << "\nenter second point co-ordinates: ";
            cin >> x2 >> y2;
        }
        double calcdist()
        {
            double dis=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
            return dis;
        }
};
int main()
{
    Distance d;
    d.getdata();
    double b=d.calcdist();
    while(b<5)
    {
      cout<<"\nthe distance is less than 5 enter anoter co-ordinates";
      d.getdata();
      b=d.calcdist();  
    }
    cout<<"Euclidean distance: "<<b;
    return 0;
}
