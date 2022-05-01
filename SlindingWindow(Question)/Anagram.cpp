#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "cbaebabacd";
    string p = "abc";
    unordered_map<char, int> mp;
    int j = 0, i = 0;

    int ans = 0;

    // storing all values and respective frequency in map from p string
    for (auto &x : p)
    {
        mp[x]++;
    }

    // now lets chack the map;
    // for (auto &it : mp)
    // {
    //     cout << it.first << "-" << it.second << endl;
    // }

    // lets make the size of mp to count which store unique values
    int count = mp.size();
    // cout << count;

    while (j < s.size())
    {
        // if the s[j] present in the hashamp then it will deduct one from the hashmap and also check if it becomes to zero then automatically count--
        if (mp.find(s[j]) != mp.end())
        {
            mp[s[j]]--;
            if (mp[s[j]] == 0)
            {
                count--;
            }
        }
        // if window length is not yet achived
        if (j - i + 1 < p.size())
        {
            j++;
        }
        // if window length is achieved we have to slide the window
        else if (j - i + 1 == p.size())
        {
            // if count==0 means it emepty all the number get deleted by the result
            if (count == 0)
            {
                ans++;
                cout << i;
            }
            if (mp.find(s[i]) != mp.end())
            {
                mp[s[i]]++;
                if (mp[s[i]] == 1)
                {
                    count++;
                }
            }
            i++;
            j++;
        }
    }
    cout << ans;

    return 0;
}