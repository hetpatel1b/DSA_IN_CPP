#include <bits/stdc++.h>
using namespace std;

class Stack
{
    vector<int> vec;

public:
    void push(int val)
    {
        vec.push_back(val);
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return;
        }
        vec.pop_back();
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        int lastidx = vec.size() - 1;
        return vec[lastidx];
    }

    bool isEmpty()
    {
        return vec.size() == 0;
    }
};

int main()
{
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    bool ans = s.isEmpty();
    cout << ans << endl;
    
    return 0;
}