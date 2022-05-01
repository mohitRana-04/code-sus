#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 5, 1, 8, 2, 9, 1};
    int i = 0, j = 0, sum = 0;
    while (j < v.size())
    {
        if (j - i + 1 < 3)
        {
            sum += v[j];
            j++;
        }
        else if (j - i + 1 == 3)
        {
            sum += v[j];
            // v.push_back(sum);
            cout << sum << endl;
            sum -= v[i];
            i++;
            j++;
        }
    }
    // cout << sum;
    return 0;
}