#include <bits/stdc++.h>
using namespace std;

int increment(int *a)
{
    *a = *a + 1;
    // cout << a;
}

int main()
{
    int a = 5;
    increment(&a);
    cout << a;
    return 0;
}