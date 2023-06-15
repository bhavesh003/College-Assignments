#include <iostream>
using namespace std;
class department
{
 int dept_id,estab_year,no_of_faculty,no_of_students;
 char dname[20];
 public:
 void accept()
  {
    cout<<"Enter department name :";
    cin>>dname;
     
    cout<<"Enter department id :";
    cin>>dept_id; 

    cout<<"Enter establishment year :";
    cin>>estab_year; 

    cout<<"Enter no of faculty :";
    cin>>no_of_faculty;

    cout<<"Enter no of students :";
    cin>>no_of_students;
  }
void display()
{
  cout<<"\n Department name ="<<dname;
  cout<<"\n Department id is ="<<dept_id; 
  cout<<"\n Department year is ="<<estab_year;
  cout<<"\n Department no of faculty is ="<<no_of_faculty;
  cout<<"\n Number of the student is: ="<<no_of_students;
  cout<<"\n---------------------------------------------\n";
}
};
int main()
{
class department d[20];
int n,i,ch;
do
{
 cout<<"\n1.Accept details\n2.Display\n3.Count numberof object\n4.Exit\nEnter your choice:";
 cin>>ch;
switch(ch)
{
case 1:cout<<"\nHow many departments you want to enter?\n";
       cin>>n;
       for(i=0;i<n;i++)
       d[i].accept();
       break;
case 2:for(i=0;i<n;i++)
       d[i].display();
       break;
case 3:d[n-1].display();
       break;
}
}
while (ch!=4);
return 0;
}

