#include <iostream>
using namespace std;
class B
{
public:
    virtual void display()
    {
        cout << "Base Class" << endl;
    }
};
class D : public B
{
public:
    void display()
    {
        cout << "Derived Class" << endl;
    }
};
int main()
{
    D ob1;
    ob1.display();
    // D d;
    // B *b = &d;
    // b->display();
}