#include <iostream>
using namespace std;
class number
{
protected:
    int a;

public:
    void setdata(int i)
    {
        a = i;
    }
    virtual void show() = 0; // pure virtual
};
class A : public number
{
public:
    void show()
    {
        cout << hex << a << endl;
    }
};
class B : public number
{
public:
    void show()
    {
        cout << dec << a << endl;
    }
};

class C : public number
{
public:
    void show()
    {
        cout << oct << a << endl;
    }
};
int main()
{
    A ob1;
    B ob2;
    C ob3;
    ob1.setdata(20);
    ob1.show();
    ob2.setdata(20);
    ob2.show();
    ob3.setdata(20);
    ob3.show();

    return 0;
}