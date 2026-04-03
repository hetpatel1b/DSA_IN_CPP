#include <bits/stdc++.h>
using namespace std;

class Demo;

class Student
{
private:
    int marks = 90;

    // Friend function and friend class can access private data
    friend void showMarks(Student s);
    friend class Demo;
};

void showMarks(Student s)
{
    cout << "Marks from Friend Function: " << s.marks << endl;
}

class Demo
{
public:
    void display(Student s)
    {
        cout << "Marks from Friend Class: " << s.marks << endl;
    }
};

int main()
{
    Student s1;
    Demo d1;

    showMarks(s1);
    d1.display(s1);

    return 0;
}
