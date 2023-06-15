#include <iostream>
using namespace std;

// fun overloading
int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    int x = 10, y = 20, z = 30;
    cout << "a+b is " << add(x, y) << endl;
    cout << "a+b+c is " << add(x, y, z) << endl;
    return 0;
}