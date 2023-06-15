#include <iostream>
using namespace std;
int main()
{
    cout << "start" << endl;
    try
    {
        cout << "try block" << endl;
        throw(10);
        cout << "it will no work" << endl;
    }
    catch (int i)
    {
        cout << "exception caught no is " << endl;
        cout << i << endl;
    }
    cout << "end";
    return 0;
}