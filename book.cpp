/*Create a class called ‘Book’ with book name (bname) and book id(bid) as data members
and setdata() and showdata() as member functions. setdata() function set the values of
the objects and showdata() function display the values of the objects. Create 5 objects
and call the setdata() function to set ‘bname’ and ‘bid’ for all five objects. Write
appropriate logic to search a book by its ‘bid’, if ‘bid’ is present in the list of objects
then print the ‘bname’ and ‘bid’ of the object using showdata() function else display
‘Book is not found’ message in the output screen. */
#include<iostream>
using namespace std;
class book
{
    char bname[20];
    long bid;
 public:
    void setdata()
    {
     cout<<"\nenter name of book ";
     cin>>bname;
     cout<<"\nenter roll number ";
     cin>>bid;   
    }
    int showdata(long g)
    {
        int l=0;
        if(bid==g)
       {
        cout<<"\nbook name "<<bname;
        cout<<"\nbook id "<<bid;
        l++;
       } 
        return l;
    }
};
int main()
{
    book s[5];
    int k=0;
    long g;
    for (int i = 0; i < 5; i++)
    {
        s[i].setdata();
    }
    cout<<"enter id to be searched";
    cin>>g;
    for ( int i = 0; i < 5; i++)
    {
      k=k+s[i].showdata(g);
    }
    if(k==0)
    cout<<"book is not found";
    return 0;
}
