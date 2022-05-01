#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "a1b";
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i]))
        {
            cout << s[i];
        }
    }
    return 0;
}