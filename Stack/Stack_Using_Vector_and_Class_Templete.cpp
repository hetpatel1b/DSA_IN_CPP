#include <bits/stdc++.h>
using namespace std;

template <class T>
class Stack
{
    vector<T> vec;

public:
    void push(T val)
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

    T top()
    {

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
    Stack<char> s;
    s.push('a');
    s.push('b');
    s.push('c');

    while (!s.isEmpty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    bool ans = s.isEmpty();
    cout << ans << endl;

    return 0;
}