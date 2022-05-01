#include <bits/stdc++.h>
using namespace std;
// letter with case change

void solve(string ip, string op)
{
    if (ip.length() == 0)
    {
        cout << op << endl;
        return;
    }
    if (isalpha(ip[0]))
    {
        string op1 = op;
        string op2 = op;
        // here we are using upper and lowers whereas in previos we using only lower becasue here it can automatically for both case means if it is lower then eventually it becomes lower otherwise upper();
        op1.push_back(toupper(ip[0]));
        op2.push_back(tolower(ip[0]));
        ip.erase(ip.begin() + 0);
        solve(ip, op1);
        solve(ip, op2);
    }
    else
    {
        string op1 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin() + 0);
        solve(ip, op1);
    }
}

int main()
{
    string ip = "a1b2";
    string op = "";
    solve(ip, op);

    return 0;
}