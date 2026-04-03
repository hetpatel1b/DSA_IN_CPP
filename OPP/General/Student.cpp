#include <bits/stdc++.h>
using namespace std;

// Simple class example
class Student
{
public:
    string name;
    float cgpa;

    void getpercentage()
    {
        cout << (cgpa * 10) << endl;
    }
};

int main()
{
    Student s1;

    s1.name = "Het Prashant Patel";
    s1.cgpa = 8.39;

    s1.getpercentage();

    return 0;
}

// TC: O(1)
// SC: O(1)
