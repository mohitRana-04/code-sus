#include <bits/stdc++.h>
using namespace std;

// we are passing through reference because we want
void insert(vector<int> &v, int temp)
{
    if (v.size() == 0 || v[v.size() - 1] <= temp)
    {
        v.push_back(temp);
        return;
    }
    int val = v[v.size() - 1];
    v.pop_back();
    insert(v, temp);
    v.push_back(val);
    return;
}

void sort(vector<int> &v)
{
    if (v.size() == 0)
    {
        return;
    }
    int temp = v[v.size() - 1];
    v.pop_back();
    sort(v);
    insert(v, temp);
    return;
}

int main()
{
    vector<int> v{2, 3, 6, 7, 4, 5};
    sort(v);

    for (int i = 0; i < v.size() - 1; i++)
    {
        cout << v[i];
    }

    return 0;
}