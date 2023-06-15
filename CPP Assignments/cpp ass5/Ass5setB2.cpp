#include<iostream>
using namespace std;
class complex
{
 private: 
   float real;
   float img;
 public:
   complex()
   {}
   complex(float r,float i)
   {
         real=r;
         img=i;
   }
 friend complex addcomplex(complex c1,complex c2);
 
 void display()
  {
     cout<<real<<","<<img<<endl;
  }
};
  complex addcomplex(complex c1,complex c2)
  {
      complex t;
      t.real=c1.real + c2.real;
      t.img=c1.img + c2.img;
      return t;
  }
int main()
{
   complex c1(8.7,3.5),c2(4.8,4.1),c3;
   c3=addcomplex(c1,c2);
   c1.display();
   c2.display();
   cout<<"sum is:"<<endl;
   c3.display();
   return 0;
}  













