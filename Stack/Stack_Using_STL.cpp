#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    bool ans = s.empty();
    cout << ans << endl;

    return 0;
}