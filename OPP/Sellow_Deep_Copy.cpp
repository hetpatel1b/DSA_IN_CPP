#include <iostream>
using namespace std;

// Example of shallow copy and deep copy
class CopyExample
{
public:
    int *data;

    CopyExample(int value)
    {
        data = new int;
        *data = value;
    }

    // Shallow copy constructor
    CopyExample(const CopyExample &obj)
    {
        data = obj.data;
    }

    // Deep copy function
    void deepCopy(const CopyExample &obj)
    {
        data = new int;
        *data = *(obj.data);
    }

    void display()
    {
        cout << "Value = " << *data << endl;
    }
};

int main()
{
    // Shallow copy
    CopyExample obj1(10);
    CopyExample obj2 = obj1;

    *obj2.data = 50;

    cout << "Shallow Copy Result:" << endl;
    obj1.display();
    obj2.display();

    // Deep copy
    CopyExample obj3(20);
    CopyExample obj4(0);

    obj4.deepCopy(obj3);

    *obj4.data = 100;

    cout << "\nDeep Copy Result:" << endl;
    obj3.display();
    obj4.display();

    return 0;
}
