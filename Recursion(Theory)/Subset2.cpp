#include <bits/stdc++.h>
using namespace std;
// this code and question is wrong dont come again here
void solve(vector<int> ip, vector<int> op)
{
    if (ip.size() == 0)
    {
        cout << op[0];
        return;
    }
    vector<int> op1 = op;
    vector<int> op2 = op;
    op2.push_back(ip[0]);
    ip.erase(op.begin());
    solve(ip, op2);
    solve(ip, op1);
}

int main()
{
    vector<int> op;
    vector<int> ip{1,2,3,4};
    // vector<int> n = {};
    solve(ip, op);
    cout<<op;
    return 0;
}