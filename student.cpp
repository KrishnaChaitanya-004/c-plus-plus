//Create a class student and declare the functions called getstudent() to get the student details (name, applicationno, four subjectmarks(maths,physics,chemistry,biology/computer science) and getscore() to get the JEEE main score, check() to find the eligibility (subjects marks>60%) for engineering admission, total() to calculate the combined score (XII score + JEE main score) and average() to calculate combined score class average.
#include<iostream>
using namespace std;
class student
{
    private:
           long int rno,marks[4],total,avg,jee;
           char name[20];
    public:
           void getstudent()
           {
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
           }
            void getscore()
            {
                cout<<"enyer your jee score";
                cin>>jee;
            }
            int check()
            {
                int i=0,j=0;
                for ( i = 0; i < 4; i++)
                {
                    if(marks[i]<60)
                    j++;
                }
                return j;
            }
            void gettotal()
            {            
                total=marks[0]+marks[1]+marks[2]+marks[3]+jee;
                    avg=(total/5);
            }
            void display(int i) 
            {
                cout<<"name of student is "<<name<<endl;
                cout<<"reg.no is "<<rno<<endl;
                cout<<"average marks "<<avg<<endl;
                if (i==0)
                    cout<<"student is eligiable";
                else
                    cout<<"student is not eligiable";
            }
        
};
int main() 
{
    student s;
    s.getstudent();
    s.getscore();
    s.gettotal();
    int p=s.check();
    s.display(p);
    return 0;
}
