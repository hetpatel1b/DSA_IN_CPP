#include <bits/stdc++.h>
using namespace std;

// Example of deep copy and destructor
class Car
{
public:
    string carname;
    string carcolor;
    int *mileage;

    Car(string name, string color)
    {
        carname = name;
        carcolor = color;
        cout << "Constructor With Parameters Which is Automatically Called By Variable" << endl;
        mileage = new int;
        *mileage = 12;
    }

    Car(Car &orginal)
    {
        cout << "Copying..." << endl;
        carname = orginal.carname;
        carcolor = orginal.carcolor;
        mileage = new int;
        *mileage = *orginal.mileage;
    }
    ~Car()
    {
        cout << "Object Deleting..." << endl;
        if (mileage != nullptr)
        {
            delete mileage;
            mileage = NULL;
        }
    }
};

int main()
{
    Car c1("BMW M4", "Black");

    // Copy constructor creates a separate mileage value
    Car c2(c1);

    cout << c2.carname << endl;
    cout << c2.carcolor << endl;
    cout << *c2.mileage << endl;
    return 0;
}
