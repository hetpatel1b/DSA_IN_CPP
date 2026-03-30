#include <bits/stdc++.h>
using namespace std;

class User
{
public:
    int id;
    string username;
    string password;
    string bio;

    void deactive()
    {
        cout << "Deleting Account" << endl;
    }

    void editBio(string Newbio)
    {

        bio = Newbio;
    }
};

int main()
{
    User u1;

    u1.id = 24025;
    u1.username = "Het Prashant Patel";
    u1.password = "LalKillo@32";
    u1.bio = "I am First Year Student in BVM College.";

    cout << u1.bio << endl;

    u1.editBio("My name Is Het Prashant Patel. I am In First Year at BVM");

    cout << u1.bio << endl;

    u1.deactive();

    return 0;
}