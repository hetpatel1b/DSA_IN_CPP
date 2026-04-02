#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int x = 5, y = 7;
    cout << sum(x, y);
    return 0;
}

// TC: O(1)
// SC: O(1)
