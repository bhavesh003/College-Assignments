#include<iostream>
using namespace std;
class printdata
{
  public:
  void print(int);
  void print(const char*);
  void print(int,const char*);
};
void printdata :: print(int n)
{
 cout<< "<"<<n<<">";
}
void printdata :: print(const char*p)
{
 cout<< "\""<<p<< "\"";
}
void printdata ::print(int x,const char *p)
{
 cout<<"\"";
 int i;
 for(i=0;i<x;i++)
 cout<<p[i];
 cout<<"\"";
}
int main()
{
printdata p1;
p1.print(10);
p1.print("HI");
p1.print(3,"object");
return 0;
}

  

