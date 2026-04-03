#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    // Pure virtual function
    virtual void sound() = 0;
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "Dog barks." << endl;
    }
};

int main()
{
    Dog d1;

    // Calling child class function
    d1.sound();

    return 0;
}
