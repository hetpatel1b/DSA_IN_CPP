#include <bits/stdc++.h>
using namespace std;

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

class Mammal : public Animal
{
public:
    string bloodType = "Warm";

    Mammal()
    {
        bloodType = "warm";
    }
};

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
    Dog d1;
    d1.eats();
    d1.breathe();
    d1.tailWag();
    cout << d1.bloodType << endl;

    return 0;
}