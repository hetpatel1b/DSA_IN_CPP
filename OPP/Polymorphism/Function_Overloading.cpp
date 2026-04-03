#include <bits/stdc++.h>
using namespace std;

// Function overloading: same function name with different parameters
class Print
{
public:
    void show(int x)
    {
        cout << "int =" << x << endl;
    }

    void show(string str)
    {
        cout << "String =" << str << endl;
    }
};

int main()
{
    // Calls different show() functions based on argument type
    Print obj1;
    obj1.show(25);
    obj1.show("Het");

    return 0;
}
