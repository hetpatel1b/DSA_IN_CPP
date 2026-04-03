#include <bits/stdc++.h>
using namespace std;

class Number
{
public:
    int value;

    Number(int v)
    {
        value = v;
    }

    // Overloading + operator
    Number operator+(Number obj)
    {
        Number temp(0);
        temp.value = value + obj.value;
        return temp;
    }
};

int main()
{
    Number n1(10);
    Number n2(20);

    // Adding two objects
    Number n3 = n1 + n2;

    cout << "Sum is: " << n3.value << endl;
    return 0;
}
