#include <bits/stdc++.h>
using namespace std;

// Base class
class Parent
{
public:
    void show()
    {
        cout << "Parent Class Show." << endl;
    }
};

// Child class overrides the show() function
class Child : public Parent
{
public:
    void show()
    {
        cout << "Child Class Show." << endl;
    }
};

int main()
{
    // Child class version is called
    Child child1;
    child1.show();
    return 0;
}
