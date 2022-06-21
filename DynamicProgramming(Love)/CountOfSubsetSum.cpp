#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr{2, 3, 5, 6, 8, 10};
    // cout<<arr[2];

    int n = arr.size();
    int sum = 10;
    int dp[n+1][sum+1];

    for(int i = 0; i< sum+1; i++){
        dp[0][i] = 0;
    }

    for(int i = 0; i< n+1; i++){
        dp[i][0] = 1;
    }

    for(int i=1; i< n+1; i++){
        for(int j = 1; j<sum+1; j++){
            // means we are considering previous element 
            if(arr[i-1]<=j){
                // for current elementb
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout<<dp[n][sum];

return 0;
}