#include<iostream>
#include<string.h>
using namespace std;
class String
{
  char *p;
  int len;
  public:
  String()
  { 
    len=0;
    p=new char[1];
  }
  String(char *s)
  {
    len=strlen(s);
    p=new char[len +1];
    strcpy(p,s);
  }
   void display()
   { 
     cout<<p;
   }
   void combine(String &b);
};
void String :: combine(String &b)
{
  char *temp;
  temp=new char[len+1];
  strcpy(temp,p);

  len+=b.len;
  delete[]p;
  p=new char[len+1];
  strcpy(p,temp);
  strcat(p,b.p);
};
int main()
{
  String s1("Hi");
  String s2("Bye");
  s1.combine(s2);
  s1.display();
  return 0;
};

  
 

  
                  
