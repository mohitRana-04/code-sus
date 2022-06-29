#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1{1, 2, 3, 4, 5, 6,7,8 };
    vector<int> v2{1, 5, 8, 9, 10, 11, 17, 10};

    int sum = 8;

    int n = v1.size();
    int dp[sum+1][n+1];
    // cout<<sum;
    // cout<<n;

    for(int i = 0; i< sum+1; i++){
        dp[i][0] = 0;
    }

    for(int i = 0; i< n+1; i++){
        dp[0][i] = 0;
    }

    for(int i = 1; i< n+1; i++){
        for(int j = 1; j< sum+1;j++){
            // cout<<dp[i][j];
            if(v1[i-1]<=j){
                dp[i][j] = max((v2[i-1]+ v1[i][j-v1[i-1]]), v1[i-1][j]);
            }
            else{
                dp[i][j] = v1[i-1][j];
            }
        }
        // cout<<endl;
    }
    cout<<dp[n][sum];

    return 0;
}