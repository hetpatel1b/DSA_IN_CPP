#include <bits/stdc++.h>
using namespace std;

// Example of private data with public methods
class User
{
    int id;
    string password;

public:
    string username;

    User(int id)
    {
        this->id = id;
        "Constructor is called and Your ID Is Stored.";
    }

    string getpassword()
    {
        return password;
    }
    void setpassword(string password)
    {
        this->password = password;
    }
};

int main()
{
    User u1(25024);

    u1.username = "Het Prashant Patel";
    u1.setpassword("LalKillo@24");

    cout << u1.username << endl;
    cout << u1.getpassword() << endl;

    return 0;
}

// TC: O(1)
// SC: O(1)
