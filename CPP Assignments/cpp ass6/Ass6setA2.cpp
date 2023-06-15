#include<iostream>
using namespace std;
class employee
{
 float salary;
 char n[20];
 public:
   void getdata()
   {
    cout<<"\nEnter name:";
    cin>>n;
    cout<<"\nEnter salary:";
    cin>>salary;
   }
void display()
{
cout<<"\nSalary is:"<<salary;
}
void operator --(int)
{
salary=salary;
cout<<"\nDecremented post salary is:"<<salary;
}
void operator --()
{
salary=salary-1;
cout<<"\nDecremented pre salary is:"<<salary;
}
};
int main()
{
employee e1;
e1.getdata();
e1.display();
e1--;
employee e2;
e2.getdata();
e2.display();
--e2;
return 0;
};


