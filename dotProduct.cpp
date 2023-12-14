/*Using function overloading: Write and test a function named dotProduct that returns
either the product of two numbers x1 and y1 or the dot product of a pair of two-
dimensional vectors (x1, y1) and (x2, y2), according to whether the function is passed
with 2 or 4 arguments. For example, with four arguments callsdotProduct(3.0, 8.0, -4. 0,
6.0) would return (3.0)(-4.0) + (8.0)(6.0) = 36.0.*/
#include<iostream>
using namespace std;

void dotproduct(float a, float b)
{
    cout << "\nproduct is: " << a * b;
}

void dotproduct(float a, float b, float c, float d)
{
    cout << "\nproduct" << "(" << (a*c) << "," << (b*d) << ")";
}

int main()
{
    float x1, x2, y1, y2;
    cout << "\nenter first point co-ordinates: ";
    cin >> x1 >> y1;
    cout << "\nenter second point co-ordinates: ";
    cin >> x2 >> y2;
    dotproduct(x1, y1);
    dotproduct(x1, y1, x2, y2);
    return 0;
}
