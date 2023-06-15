#include <iostream>
using namespace std;
class Number
{
protected:
    int val;

public:
    void setdata(int i)
    {
        val = i;
    }
    virtual void show() = 0;
};
class Hexatype : public Number
{
public:
    void show()
    {
        cout << hex << val << endl;
    }
};
class dectype : public Number
{
public:
    void show()
    {
        cout << dec << val << endl;
    }
};
class Octtype : public Number
{
public:
    void show()
    {
        cout << oct << val << endl;
    }
};
int main()
{
    Hexatype h;
    dectype d;
    Octtype o;
    h.setdata(20);
    d.setdata(20);
    o.setdata(20);
    h.show();
    d.show();
    o.show();
    return 0;
}