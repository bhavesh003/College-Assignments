#include<iostream>
using namespace std;
 int main()
{
int i,j,n,sum=0,tsum;
cout<<"Input the value:";
cin>>n;
for(i=1;i<=n;i++)
{
  tsum=0;
  for(j=1;j<=i;j++)
  {
    sum+=j;
    tsum+=j;
    cout<<j;
    if(j<i)
     {
       cout<<"+";
     }
   }
cout<<"="<<tsum<<endl;
}
cout<<"The sum is:"<<sum<<endl;
}

