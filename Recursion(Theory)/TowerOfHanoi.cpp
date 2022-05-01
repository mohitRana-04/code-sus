#include <bits/stdc++.h>
using namespace std;

void solve(int s, int d, int h, int n)
{
    if (n == 1)
    {
        cout << "Moving plate" << n << "From" << s << "to" << d << endl;
        return;
    }
    solve(s, h, d, n - 1);
    cout << "Moving plate" << n << "From" << s << "to" << d << endl;
    solve(h, d, s, n - 1);
}

int main()
{
    int s = 1, h = 2, d = 3;
    int n = 4;
    solve(s, d, h, n);
    return 0;
}