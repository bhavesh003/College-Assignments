#include <iostream>
using namespace std;
class number
{
public:
    void add(int a, int b)
    {
        cout << "sum is " << a + b << endl;
    }
    void add(float a, float b)
    {
        cout << "sum is " << a + b << endl;
    }
    void add(int a, float b)
    {
        cout << "sum is " << a + b << endl;
    }
};
int main()
{
    number A, B, C;
    A.add(10, 20);
    B.add(1.2, 1.2);
    C.add(100, 3.4);
    // return 0;
}