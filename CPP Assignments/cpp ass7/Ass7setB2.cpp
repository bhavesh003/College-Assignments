#include<iostream>
using namespace std;
class train
{
protected:
int tno;
char name[10];
public:
void acc()
{
cout<<"\nEnter train no:";
cin>>tno;
cout<<"\nEnter train name:"; 
cin>>name;
}
};
class route:public train
{
public:
int rid;
char s[10],d[10];
void ac()
{
cout<<"\nEnter tarin id:";
cin>>rid;
cout<<"\nEnter train source:";
cin>>s;
cout<<"\nEnter destination:";
cin>>d;
}
};
class reser:public route
{
public:
int nos,fare,dd,mm,yyyy;
char clas[10];
void a()
{
cout<<"\nEnter no of seats:";
cin>>nos;
cout<<"\nEnter train class:";
cin>>clas;
cout<<"\nEnter date(dd mm yyyy):";
cin>>dd>>mm>>yyyy;
}
void dis()
{
cout<<"\ntrain no\t\t"<<tno;
cout<<"\ntrain no\t\t"<<tno;
cout<<"\ntrain no\t\t"<<tno;
cout<<"\ntrain no\t\t"<<tno;
cout<<"\ntrain no\t\t"<<tno;
cout<<"\ntrain no\t\t"<<tno;
cout<<"\ntrain no\t\t"<<tno;
cout<<"\ntrain no\t\t"<<tno;
}
};
int main()
{
int i,s;
reser r[20];
cout<<"Enter hoe many details you want to enter:";
cin>>s;
for(i=0;i<s;i++)
{
 r[i].acc();
 r[i].ac();
 r[i].a();
}
for(i=0;i<s;i++)
{
 r[i].dis();
}
return 0;
}
