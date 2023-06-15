# include <iostream>
using namespace std;
class point
{
 int x,y;
 public:
 point()
  {
    x=y=0;
    cout<<"In default constructor"<<endl;
  }
  point(int a=1,int b=2)
  {
    x=a;
    y=b;
    cout<<"In parameterized constructor"<<endl;
  }
  point(const point &c)
  {
    cout<<"In copy constructor"<<endl;
    x=c.x;
    y=c.y;
  }
  ~point()
   {
     cout<<"Object destroyed = "<<this<<endl;
   }
   void dis()
   {
     cout<<"this ="<<this<<endl;
     cout<<"X ="<<x<<endl;
     cout<<"Y ="<<y<<endl;
   }
};
int main()
{
  point p();
  cout<<"&p = "<<&p<<endl;
 
  point f(4,6);
  cout<<"&f = "<<&f<<endl;
  f.dis();

  point h(f);
  cout<<"&h = "<<&h<<endl;
  h.dis();
  return 0;
}
