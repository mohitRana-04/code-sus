#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char, int> m;
    string s = "mohitm";
    int l = 0, r = 0;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    for (auto &it : m)
    {

        // cout << it.first << ' ' << it.second << '\n';
        if (it.second > 1)
        {
            cout << it.first;
        }
    }

    return 0;
}