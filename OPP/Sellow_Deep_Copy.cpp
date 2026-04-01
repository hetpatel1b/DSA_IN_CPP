#include <iostream>
using namespace std;

class CopyExample
{
public:
    int *data;

    // Constructor
    CopyExample(int value)
    {
        data = new int;
        *data = value;
    }

    // Shallow Copy Constructor
    CopyExample(const CopyExample &obj)
    {
        data = obj.data; // only address copied
    }

    // Deep Copy Function
    void deepCopy(const CopyExample &obj)
    {
        data = new int;      // new memory
        *data = *(obj.data); // copy value
    }

    void display()
    {
        cout << "Value = " << *data << endl;
    }
};

int main()
{

    // Shallow Copy
    CopyExample obj1(10);
    CopyExample obj2 = obj1;

    *obj2.data = 50;

    cout << "Shallow Copy Result:" << endl;
    obj1.display();
    obj2.display();

    // Deep Copy
    CopyExample obj3(20);
    CopyExample obj4(0);

    obj4.deepCopy(obj3);

    *obj4.data = 100;

    cout << "\nDeep Copy Result:" << endl;
    obj3.display();
    obj4.display();

    return 0;
}