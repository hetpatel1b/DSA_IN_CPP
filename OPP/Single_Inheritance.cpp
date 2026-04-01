#include <bits/stdc++.h>
using namespace std;

// Base class
class Animal
{

public:
    string color;

    void eats()
    {
        cout << "Eating..." << endl;
    }
    void breathe()
    {
        cout << "Breathing..." << endl;
    }
};

// Derived class of Animal
class Fish : public Animal
{
public:
    int fins;

    void swim()
    {
        cout << "Swimming..." << endl;
    }
};

int main()
{
    // Fish object can access its own and inherited members
    Fish f1;
    f1.fins = 3;
    cout << f1.fins << endl;
    f1.swim();
    f1.eats();
    f1.breathe();

    return 0;
}
