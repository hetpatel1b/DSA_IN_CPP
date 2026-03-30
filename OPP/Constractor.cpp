#include <bits/stdc++.h>
using namespace std;

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
    Car s1;

    Car s2("BMW M4", "Black");

    cout << s2.getName() << endl;
    cout << s2.getColor() << endl;
    return 0;
}