#include <bits/stdc++.h>
#include <stack>
using namespace std;

void insert(stack<int> &s, int temp)
{
    if (s.size() == 0)
    {
        s.push(temp);
    }
    int ele = s.top();
    s.pop();
    insert(s, temp);
    s.push(ele);
}

void reverse(stack<int> &s)
{
    if (s.size() == 0)
    {
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    insert(s, temp);
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(7);
    s.push(1);
    s.push(10);

    /*
    10
    1
    7
    4
    5
    10-1-7-4-5
    */

    // code for top to bottom
    // while (!s.empty())

    // {
    //     cout << s.top();
    //     s.pop();
    // }

    reverse(s);

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}