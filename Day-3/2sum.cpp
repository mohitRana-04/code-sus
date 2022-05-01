#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1, 3, -1, -3, 5, 3, 6, 7};
    int target = 8;
    sort(v.begin(), v.end());

    int l = 0, r = v.size()-1;
    cout<<v[l]<<v[r];

    while(l<r)
    {
        if(v[l]+v[r]==target)
        {
            cout<<v[l]<<v[r];
            break;
        }
        else if (v[l]+v[r]>=target)
        {
            r--;
        }
        else{
            l++;
        }
    }
    
return 0;
}