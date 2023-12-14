/*Create a class and identify relevant attributes and behaviors for the following:
A university wants to collect students’ information for offering scholarships based on
their better academic performance.
The following methods are used:-
getDetail() - This method gets a student’s details as arguments from main function.
displayDetail() - used to display a student detail.
checkScholarship() – This method returns 1 (or) 0. One for “eligible” and zero
for “Not eligible” based on the student’s subjects marks, should be greater than
95% and attendance should be greater than 80%.*/
#include<iostream>
#include<cstring>
using namespace std;
class student
{
    private:
           long int rno,marks[4],att;
           char name[20];
    public:
           void getstudent(char a[],long b,long c[],long at)
           {
               int j=0;
                strcpy(name,a);
                rno=b;
                for(j=0;j<4;j++)
                {
                    marks[j]=c[j];
                }
                att=at;
           }
            int check()
            {
                cout<<att;
               if(marks[0]>=95&&marks[1]>=95&&marks[2]>=95&&marks[3]>=95&&att>=80)
               return 1;
               else 
               return 0;
            }
            void display(int i) 
            {
                cout<<"name of student is "<<name<<endl;
                cout<<"reg.no is "<<rno<<endl;
                if (i==1)
                    cout<<"student is eligiable";
                else
                    cout<<"student is not eligiable";
            }
        
};
int main() 
{
    student s;
    long int rno,marks[4],at;
    char name[20];
    int j=0;
    cout<<"enter the name of student"<<endl;
    cin>>name;
    cout<<"enter r.no"<<endl;
    cin>>rno;
    cout<<"enter 4 subject marks of subjects math,phy,che,computer science"<<endl;
    for(j=0;j<4;j++)
    {
        cin>>marks[j];
    }
    cout<<"enyer your attendance";
    cin>>at;
    s.getstudent(name,rno,marks,at);
    int p=s.check();
    s.display(p);
    return 0;
}
