#include <iostream>
using namespace std;
class array
{
 int x,n,num;
 int *arr;
 public:
 array()
  {
    cout<<"How many no. you want to print?";
    cin>>n;
    arr=new int(n);
  }
  ~array()
   {
     delete[] arr;
   }
   void getdata()
   {
    cout<<"\n\nEnter"<<n<<"\nnumber"<<endl;
     { 
       for(int x=0;x<n;x++)
         { 
           cin>>arr[x];
         }
    }
}
   void show()
  {
    cout<<"\n\nYou typed";
    for(int x=0;x<n;x++)
     {
       cout<<arr[x]<<" ";
     }
  }
 void median()
 {
   if(n%2==0)
    {
      num=(n/2);
      cout<<"\n\nThe median is"<<arr[num-1]<<arr[num];
    }
    else
    {
      num=(n/2);
      cout<<"\n\n The median is"<<arr[num];
    }
 }
};
int main()
{
 array a1;
 a1.getdata();
 a1.median();
 a1.show();
 return 0;
}







