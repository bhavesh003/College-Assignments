#include <iostream>
#include <string>
using namespace std;

class cars
{
private:
    string company_name;
    string model_name;
    double price;

public:
    // default const
    cars()
    {
        cout << "Default Constructor is Called" << endl;
        company_name = "Tata";
    }

    // parametarize const
    cars(string cname, string mname, double p)
    {
        cout << "Parametarized Constructor is Called" << endl;
        company_name = cname;
        model_name = mname;
        price = p;
    }

    // copy const
    cars(cars &obj)
    {
        cout << "Copy Constructor is Called" << endl;
        company_name = obj.company_name;
        model_name = obj.model_name;
        price = obj.price;
    }

    void setData(string cname, string mname, double p)
    {
        company_name = cname;
        model_name = mname;
        price = p;
    }

    void displayData()
    {
        cout << "-------------------" << endl;
        cout << "Company Name : " << company_name << endl;
        cout << "Model Name : " << model_name << endl;
        cout << "Price : " << price << endl;
    }

    // destructor
    ~cars()
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    cars car1, car2("Honda", "Toyota", 500);
    car1.setData("Bajaj", "Platina", 750);
    car1.displayData();
    car2.displayData();
    // cars car3 = car1; // copy const called
    // car3.displayData();
    return 0;
}