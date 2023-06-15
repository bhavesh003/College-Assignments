#include <iostream>
using namespace std;
inline float area(float radius)
{
  return 3.14 * radius *radius;
}
inline float a_rec(float l,float w)
{
  return l*w;
}
inline float a_square(float a)
{
  return a*a;
}
int main()
{
 float radius;
 cout<<"\nEnter radius of circle=";
 cin>>radius;
 cout<<"\nArea of circle using inline function is:"<<area(radius);
 float l,w;
 cout<<"\nEnter length=";
 cin>>l;
 cout<<"\nEnter width=";
 cin>>w;
 cout<<"\nArea of rectangle using inline function is="<<a_rec(l,w);
 float a;
 cout<<"\nEnter side of square=";
 cin>>a;
 cout<<"\nArea of square using inline function id="<<a_square(a);
 return 0;
}




