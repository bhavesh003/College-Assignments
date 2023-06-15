#include<iostream>
using namespace std;
class rectangle2;
class rectangle1
{
 float l,w,area1; 
 public:
  void getdata()
    {
      cout<<"Enter length:\n";
      cin>>l;
      cout<<"\nEnter width:";
      cin>>w;
   }
void display()
{
  area1=l*w;
  cout<<"\nArea is:"<<area1;
}
friend void compare(rectangle1 r1,rectangle2 r2);
};
class rectangle2
{
 public:
 float a,b,area2;
 void getdata()
 {
   cout<<"\nEnter 2nd length:";
   cin>>a;
   cout<<"\nEnter 2nd width:";
   cin>>b;
 }
 void show()
 {
   area2=a*b;
   cout<<"Area is:"<<area2;
 }
friend void compare(rectangle1 r1,rectangle2 r2);
};
void compare(rectangle1 r1,rectangle2 r2)
{
 if(r1.area1==r2.area2)
 cout<<"\nBoth are same\n";
 else 
 cout<<"\nBoth are not same";
}
int main()
{
 rectangle1 R1;
 R1.getdata();
 R1.display();
 rectangle2 R2;
 R2.getdata();
 R2.show();
 compare(R1,R2);
 return 0;
}


    

