#include <bits/stdc++.h>
#include <stack>
using namespace std;

// code for top to bottom
void top(stack<int> &s)
{
    // cout << s.top();
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        top(s);
        s.push(temp);
        cout << temp << endl;
    }
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(7);
    s.push(1);
    s.push(10);

    // code for top to bottom
    // while (!s.empty())

    // {
    //     cout << s.top();
    //     s.pop();
    // }

    top(s);

    return 0;
}