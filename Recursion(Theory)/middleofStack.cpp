#include <bits/stdc++.h>
using namespace std;

void delete_func(stack<int> &s, int toDelete)
{
    if (toDelete == 1)
    {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    delete_func(s, toDelete - 1);
    s.push(temp);
    return;
}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(7);
    s.push(1);
    s.push(10);

    int toDelete = 3;
    delete_func(s, toDelete);
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}