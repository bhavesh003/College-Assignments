#include <iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout << "this is virtual" << endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "this is class B" << endl;
    }
};
class c : public A
{
public:
    void display()
    {
        cout << "this is class c" << endl;
    }
};
int main()
{
    A *p, b;
    B ob1;
    c ob2;
    p = &b;
    p->display();
    p = &ob1;
    p->display();
    p = &ob2;
    p->display();
}
