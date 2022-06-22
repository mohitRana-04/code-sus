#include <bits/stdc++.h>
using namespace std;

int main(){
    // this is a linear dp question 
    vector<int> v{1,100,1,1,1,100,1,1,100,1};

    int n = v.size(); //10
    int dp[n+2];  //12

    // means the ending step as we can jump only 1 or 2 steps at most
    dp[n] = 0;
    dp[n+1] = 0;

    // reverse loop
    for(int i=n-1; i>=0; i-- ){
        // cout<<v[i];
        // we are comparing each element of vector to the next and two next in the array
        dp[i] = v[i] + min(dp[i+1], dp[i+2]);
    }
    cout<<min(dp[0],dp[1]);

return 0;
}