# include <iostream>
using namespace std;
class num
{
  int n1,n2;
  public:
  num()
 {
   n1=20;
   n2=60;
   cout<<"In default constructor"<<endl;
 }
  num(int a,int b)
  {
    n1=a;
    n2=b;
    cout<<"In parameterized constructor"<<endl;
  }
  void display()
  { 
    if(n1>n2)
    cout<<n1<<" is maximum"<<endl;
    else
    cout<<n2<<" is maximum"<<endl;
  }
};
int main()
{
  num a;
  a.display();
  num b(10,20);
  b.display();
  return 0;
}

