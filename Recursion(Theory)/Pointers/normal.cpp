#include <bits/stdc++.h>
using namespace std;

void normal(int **arr[])
{
    cout << sizeof(arr) / sizeof(arr[0]);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    // int n = sizeof(arr) / sizeof(arr[0]);
    normal(*arr);

    return 0;
}