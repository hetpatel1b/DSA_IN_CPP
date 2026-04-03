#include <bits/stdc++.h>
using namespace std;

// Example of default and parameterized constructor
class Car
{

    string carname;
    string carcolor;

public:
    Car()
    {

        cout << "Constructor Without Parameters Which is Automatically Called By Variable" << endl;
    }

    Car(string name, string color)
    {
        carname = name;
        carcolor = color;
        cout << "Constructor With Parameters Which is Automatically Called By Variable" << endl;
    }

    string getName()
    {
        return carname;
    }

    string getColor()
    {
        return carcolor;
    }
};

int main()
{
    // Default constructor call
    Car c1;

    // Parameterized constructor call
    Car c2("BMW M4", "Black");

    cout << c2.getName() << endl;
    cout << c2.getColor() << endl;
    return 0;
}

// TC: O(1)
// SC: O(1)
