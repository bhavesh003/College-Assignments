// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     void display()
//     {
//         cout << "sum is " << a + b << endl;
//     }
// };
// class B : public A
// {
// public:
//     int a;
//     void adata()
//     {
//         cout << "enter value1: " << endl;
//         cin >> a;
//     }
// };
// class C : public A
// {
// public:
//     int b;
//     void bdata()
//     {
//         cout << "enter value2: " << endl;
//         cin >> b;
//     }
// };
// class
//     int
//     main()
// {
//     A ob1;
//     B ob2;
//     C ob3;
//     ob1.adata();
//     ob1.bdata();
//     ob1.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Animal
// {
// public:
//     void info()
//     {
//         cout << "I am an animal." << endl;
//     }
// };
// class Dog : public Animal
// {
// public:
//     void bark()
//     {
//         cout << "I am a Dog. Woof woof." << endl;
//     }
// };
// class Cat : public Animal
// {
// public:
//     void meow()
//     {
//         cout << "I am a Cat. Meow." << endl;
//     }
// };

// int main()
// {
//     Dog dog1;
//     cout << "Dog Class:" << endl;
//     dog1.bark();
//     dog1.info();

//     Cat cat1;
//     cout << "\nCat Class:" << endl;
//     cat1.info();
//     cat1.meow();

//     return 0;
// }

#include <iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout << "A is called" << endl;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "B is called" << endl;
    }
};
class C : public A
{
public:
    void display()
    {
        cout << "C is called" << endl;
    }
};
class D : public B, public C
{
public:
    void display()
    {
        cout << "D is called" << endl;
    }
};
int main()
{
    A ob1;
    A *p;
    p = &ob1;
    ob1.display();

    return 0;
}