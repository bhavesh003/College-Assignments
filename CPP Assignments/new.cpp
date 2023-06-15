#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Object created" << endl;
    }
    ~A()
    {
        cout << "Object Destroyed" << endl;
    }
};
A a1;
int main()
{
    A a2;
    {
        A a3;
    }
    exit(0);
}