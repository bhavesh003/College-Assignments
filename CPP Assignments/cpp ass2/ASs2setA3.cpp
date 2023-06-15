#include <iostream>
using namespace std;
class district
{
  int code,population,lrate;
  float sqft;
  char n[20];
  public:
  void accept()
   {
     cout<<"Enter d_code :";
     cin>>code;
     
     cout<<"Enter d_name :";
     cin>>n;

     cout<<"Enter d_population :";
     cin>>population;

     cout<<"Enter d_lrate :";
     cin>>lrate;

     cout<<"Enter area_sqft :";
     cin>>sqft;
   }
   void display();
     int getpopulation()
      {
        return population;
      }
     int getlrate()
      {
        return lrate;
      }
};
void district::display()
{
  cout<<"\t District name="<<n;
  cout<<"\t District code="<<code;
  cout<<"\t District population="<<population;
  cout<<"\t District literacy rate="<<lrate;
  cout<<"\t District area="<<sqft;
  cout<<"\n-----------------------------------------------------\n";
}
int main()
{
int n,i,index=0;
class district d[10];
cout<<"Enter number of districts\n";
cin>>n;
for(i=0;i<n;i++)
d[i].accept();
cout<<"\n\n All districts details are as follows :\n";
for(i=0;i,n;i++)
 {
   cout<<"\n\n District"<<i+1<<"details\n";
   d[i].display();
 }
cout<<"Least population details are as follows\n";
for(i=0;i<n;i++)
  {
    if(d[i].district::getpopulation()<d[index].district::getpopulation())
    index=i;
  }
d[index].display();
cout<<"highest literacy rate details are as follows \n";
for(i=0;i<n;i++) 
  {
    if(d[i].district::getlrate()>d[index].district::getlrate())
    index=i;
  }
d[index].display();
return 0;
} 
             
     
