#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    // Virtual function in base class
    virtual void sound()
    {
        cout << "Animal makes a sound." << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "Cat meows." << endl;
    }
};

int main()
{
    Animal *a1;
    Cat c1;

    a1 = &c1;

    // Calls child class function using base pointer
    a1->sound();

    return 0;
}
