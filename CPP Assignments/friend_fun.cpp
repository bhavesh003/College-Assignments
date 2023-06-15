#include <iostream>
using namespace std;
class number
{
private:
    int x, y;

public:
    void setdata()
    {
        x = 10;
        y = 20;
    }
    friend float mean(number z);
};
float mean(number z)
{
    return (z.x + z.y) / 2.0;
}
int main()
{
    number A;
    A.setdata();
    cout << "mean of values is " << mean(A) << endl;
    return 0;
}