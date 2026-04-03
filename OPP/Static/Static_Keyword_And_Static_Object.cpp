#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    static int count;

    Student(string n)
    {
        name = n;
        count++;
    }

    void show()
    {
        cout << "Student Name: " << name << endl;
    }
};

int Student::count = 0;

void demo()
{
    // Static object is created only one time
    static Student s1("Ravi");
    s1.show();
}

int main()
{
    Student s2("Aman");
    Student s3("Neha");

    // Static variable is shared by all objects
    cout << "Total Students: " << Student::count << endl;

    demo();
    demo();

    return 0;
}
