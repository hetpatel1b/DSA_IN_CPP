#include <bits/stdc++.h>
using namespace std;

// Example of copy constructor
class Car
{
public:
    string carname;
    string carcolor;

    Car(string name, string color)
    {
        carname = name;
        carcolor = color;
        cout << "Constructor With Parameters Which is Automatically Called By Variable" << endl;
    }

    Car(Car &orginal)
    {
        cout << "Copying..." << endl;
        carname = orginal.carname;
        carcolor = orginal.carcolor;
    }
};

int main()
{
    Car c1("BMW M4", "Black");

    // Copy constructor is called here
    Car c2(c1);

    cout << c2.carname << endl;
    cout << c2.carcolor << endl;
    return 0;
}
