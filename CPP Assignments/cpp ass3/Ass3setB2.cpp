# include <iostream>
using namespace std;
class date
{
  int dd,mm,yyyy;
  public:
  date(int ,int ,int);
  void display(int dd,int mm,int yyyy)
  {
    cout<<"\n Input date is \t";
    cout<<dd<<"-"<<mm<<"-"<<yyyy;
    switch(mm)
    {
      case 1:cout<<"\n output date is\t"<<dd<<"January"<<"yyyy";
             break;
      case 2:cout<<"\n output date is\t"<<dd<<"February"<<"yyyy";
             break;
      case 3:cout<<"\n output date is\t"<<dd<<"March"<<"yyyy";
             break;
      case 4:cout<<"\n output date is\t"<<dd<<"April"<<yyyy;
             break;
      case 5:cout<<"\n output date is\t"<<dd<<"May"<<yyyy;
             break;
      case 6:cout<<"\n output date is\t"<<dd<<"June"<<yyyy;
             break;
      case 7:cout<<"\n output date is\t"<<dd<<"July"<<yyyy;
             break;
      case 8:cout<<"\n output date is\t"<<dd<<"August"<<yyyy;
             break;
      case 9:cout<<"\n output date is\t"<<dd<<"September"<<yyyy;
             break;
      case 10:cout<<"\n output date is\t"<<dd<<"October"<<yyyy;
             break;
      case 11:cout<<"\n output date is\t"<<dd<<"November"<<yyyy;
             break;
      case 12:cout<<"\n output date is\t"<<dd<<"december"<<yyyy;
              break;
            default:
                cout<<"Invalid Month";
  }
  }
};
date ::date(int d,int m,int y)
 { 
   dd=d;
   mm=m;
   yyyy=y;
 }
int main()
{
 int dd,mm,yyyy;
 cout<<"enter a date : "<<endl;
 cin>>dd;
 cout<<"enter a month : "<<endl;
 cin>>mm;
 cout<<"enter a year : "<<endl;
 cin>>yyyy;
 date d(dd,mm,yyyy);
 d.display(dd,mm,yyyy);
 return 0;
}


