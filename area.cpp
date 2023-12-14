/*Write a C++ program to find the area of a circle, square,
rectangle and triangle using the concept of objects and classes.*/
#include<iostream>
using namespace std;
class area
{
    protected:
        float tarea,carea;
        int rarea,sarea;
    public:
        float circle(float r)
        {
        carea=(3.14)*r*r; return carea;
        }
        int rectangle(int l,int w)
        {
        rarea=l*w; return rarea;
        }
        int square(int l)
        {
        sarea=l*l; return sarea;
        }
        float triangle(int b, int h)
        {
        tarea=(0.5)*b*h; return tarea;
        }
};
int main()
{ 
    area z;
 int c;
cout<<"which shape are do u want to find\n"; 
cout<<"1)circle\n2)rectangle\n3)triangle";
cout<<"\n4)square\nentre ur choice: ";
cin>>c;
switch(c)
{
case 1:
{
float r;
cout<<"\nenter the radius of circle\n";
cin>>r;
cout<<"\narea="<<z.circle(r);
break;
}
case 2:
{
int l,w;
cout<<"\nenter the lenght and width of rectangle\n";
cin>>l>>w;
cout<<"\narea="<<z.rectangle(l,w);
break;
}
case 4:
{
int l;
cout<<"\nenter the side of square\n";
cin>>l;
cout<<"\narea="<<z.square(l);
break;
}
case 3:
{
int h,b;
cout<<"\nenter height and base of triangle\n";
cin>>h>>b;
cout<<"\narea="<<z.triangle(b,h);
break;
}
default:
cout<<"wrong input";
break;
}
return 0;
}
