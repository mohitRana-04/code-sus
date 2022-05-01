#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums = {1, 2, 3, 4, 3};
    int max = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        stack<int> s;
        int s_len = nums.size() - 1;
        cout << "For " << nums[i] << "-";
        if (i != s_len)
        {
            s.push(nums[s_len]);
            s_len -= 1;
        }
        while (!s.empty())
        {
            cout << s.top();
            s.pop();
        }
        cout << endl;
    }

    return 0;
}