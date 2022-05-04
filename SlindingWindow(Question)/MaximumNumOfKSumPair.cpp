#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 3, 3, 4};
    int l = 0, r = v.size() - 1, k = 6, counter = 0;
    // cout << l << r;

    while (l < r)
    {
        if (v[l] + v[r] == k)
        {
            counter++;
            l++;
            r--;
        }
        else if (v[l] + v[r] < k)
        {
            l++;
        }
        else
        {
            r--;
        }
    }
    cout << counter;
    return 0;
}

/*
unordered_map<int,int>m;
        int count=0;
        for(auto x:nums)
        {
            if(m[k-x]){
            m[(k-x)]--;
            m[x]--;
            count++;
            }
            m[x]++;
        }
        return count;
*/