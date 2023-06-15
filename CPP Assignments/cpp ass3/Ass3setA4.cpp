# include <iostream>
using namespace std;
class sum
{ 
  int x;
  public:
  sum(int n)
  {
   x=n;
  }
 void calsum()
 {
   int n,sum=0;
   for(n=0;n<=10;n++)
     { 
       sum=sum+n;
     }
    cout<<"The sum of 0 to 10"<<" = "<<sum<<endl;
    }
};
int main ()
{
  sum a(10);
  a.calsum();
  return 0;
}

