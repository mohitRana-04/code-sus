#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{11, 13, 15, 12, 17, 14, 21, 18, 19, 20};
    int l = 0, r = v.size() - 1;
    int left = INT_MAX, right = INT_MIN;
    int i = 0;

    while (v[l] < v[l + 1])
    {

        l++;
    }
    l++;
    // cout << v[l] << "-" << l << "index";

    // cout << endl;
    while (v[r] > v[r - 1])
    {

        r--;
    }
    r--;
    // cout << v[r] << "-" << r << "index";

    // cout << v[l];
    while (v[l] > v[i])
    {
        i++;
    }
    // cout << i;
    int j = v.size() - 1;
    while (v[r] < v[j])
    {
        j--;
    }
    // cout << j;

    cout << j - i + 1;

    return 0;
}