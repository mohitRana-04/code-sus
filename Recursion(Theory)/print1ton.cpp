#include <bits/stdc++.h>
using namespace std;

void count(int n)
{
    if (n == 1)
    {
        cout << 1;
    }
    else
    {
        count(n - 1);
        cout << n;
    }
}

int main()
{
    count(7);
    return 0;
}