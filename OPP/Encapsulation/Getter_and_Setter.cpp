#include <bits/stdc++.h>
using namespace std;

// Example of encapsulation using getter and setter
class Student
{
    string name;
    float cgpa;

public:
    void setName(string s_name)
    {
        name = s_name;
    }

    void setCgpa(float s_cgpa)
    {
        cgpa = s_cgpa;
    }

    string getName()
    {
        return name;
    }

    float getCgpa()
    {
        return cgpa;
    }

    void getpercentage()
    {
        cout << (cgpa * 10) << endl;
    }
};

int main()
{
    Student s1;

    s1.setName("Het Patel");
    cout << s1.getName()<<endl;

    s1.setCgpa(8.39);
    cout << s1.getCgpa()<<endl;

    return 0;
}

// TC: O(1)
// SC: O(1)
