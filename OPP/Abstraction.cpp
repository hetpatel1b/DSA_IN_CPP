#include <bits/stdc++.h>
using namespace std;

class ATM
{
private:
    int balance = 5000;

public:
    // Only needed information is shown
    void showBalance()
    {
        cout << "Your balance is: " << balance << endl;
    }
};

int main()
{
    ATM user1;

    // Accessing data through public function
    user1.showBalance();

    return 0;
}
