#include <iostream>
using namespace std;
class info
{
private:
    int roll;
    char name[20];

public:
    info()
    {
        roll = 0;
        name[0] = '0';
    }
    friend istream &operator>>(istream &, info &);
    friend ostream &operator<<(ostream &, info &);
};
istream &operator>>(istream &S, info &d)
{
    cout << "enter roll no : ";
    S >> d.roll;
    cout << "enter name : ";
    S >> d.name;
    return S;
}
ostream &operator<<(ostream &S, info &d)
{
    S << d.roll;
    S << d.name;
    return S;
}
int main()
{
    info ob1;
    cin >> ob1;
    cout << ob1;
}