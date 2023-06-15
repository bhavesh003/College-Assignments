#include <iostream>
using namespace std;
// class student
// {
//     int roll;
//     char name[10];

// public:
//     void getdata();
//     void putdata();
// };
// void student::getdata()
// {
//     cout << "enter roll : ";
//     cin >> roll;
//     cout << "enter name : ";
//     cin >> name;
// }
// void student ::putdata()
// {
//     cout << "roll" << roll << endl;
//     cout << "name" << name << endl;
// }
// int main()
// {
//     int i;
//     student s[3];
//     for (i = 0; i < 3; i++)
//     {
//         cout << "student info " << endl;
//         s[i].getdata();
//     }
//     for (i = 0; i < 3; i++)
//     {
//         s[i].putdata();
//     }
//     return 0;
// }
class book
{
    char title[10];
    int price;

public:
    void accept();
    void display();
};
void book ::accept()
{
    cout << "enter book name : ";
    cin >> title;
    cout << "enter price ";
    cin >> price;
}
void book ::display()
{
    cout << "book : " << title << endl;
    cout << "price" << price << endl;
}
int main()
{
    int i;
    book s[5];
    for (i = 0; i < 5; i++)
    {
        cout << "book info " << endl;
        s[i].accept();
    }
    for (i = 0; i < 5; i++)
    {
        s[i].display();
    }
    return 0;
}