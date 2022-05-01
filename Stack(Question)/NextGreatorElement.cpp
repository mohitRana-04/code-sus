#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums1 = {2, 4};
    vector<int> nums2 = {1, 2, 3, 4};
    vector<int> res;

    for (int i = 0; i < nums1.size(); i++)
    {
        stack<int> s;
        // cout << nums1[i];
        // cout << "Checking for " << nums1[i] << "-" << endl;
        int len_nums2 = nums2.size() - 1;
        while (nums1[i] != nums2[len_nums2])
        {
            s.push(nums2[len_nums2]);

            len_nums2 -= 1;
        }
        while (!s.empty() && s.top() <= nums1[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            res.push_back(-1);
        }
        else
        {
            res.push_back(s.top());
        }
    }

    for (auto x : res)
    {
        cout << x;
    }

    return 0;
}