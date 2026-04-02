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
class Mammal : public Animal
{
public:
    string bloodType = "Warm";

    Mammal()
    {
        bloodType = "warm";
    }
};

// Multilevel inheritance: Animal -> Mammal -> Dog
class Dog : public Mammal
{
public:
    void tailWag()
    {
        cout << "A Dog Wags Its Tail" << endl;
    }
};

int main()
{
    // Dog object can access members of both Mammal and Animal
    Dog d1;
    d1.eats();
    d1.breathe();
    d1.tailWag();
    cout << d1.bloodType << endl;

    return 0;
}

// TC: O(1)
// SC: O(1)
