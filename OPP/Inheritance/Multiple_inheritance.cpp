#include <bits/stdc++.h>
using namespace std;

// First base class
class Teacher
{
public:
    int salary;
    string subject;
};

// Second base class
class Student
{
public:
    int roll_no;
    float cgpa;
};

// Multiple inheritance: TA inherits from both Student and Teacher
class TA : public Student, public Teacher
{
public:
    string name;
};

int main()
{
    // TA object can access members of both parent classes
    TA ta1;
    ta1.name = "Het Patel";
    ta1.subject = "DSA";
    ta1.cgpa = 8.39;

    cout << ta1.name << endl;
    cout << ta1.subject << endl;
    cout << ta1.cgpa << endl;

    return 0;
}

// TC: O(1)
// SC: O(1)
