#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> s = {1, 2, 3};
    vector<int> n = {7};
    s.push_back(n[0]);
    for (auto x : s)
    {
        cout << x << endl;
    }
    return 0;
}