#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{7, 1, 5, 3, 6, 4};
    // cout << v[0];
    int min_so_far = INT_MAX;
    int max_so_far = 0;
    int l = 0;
    while (l < v.size())
    {
        if (v[l] < min_so_far)
        {
            min_so_far = v[l];
        }
        max_so_far = max(max_so_far, v[l] - min_so_far);
        l += 1;
    }
    cout << max_so_far;

    return 0;
}