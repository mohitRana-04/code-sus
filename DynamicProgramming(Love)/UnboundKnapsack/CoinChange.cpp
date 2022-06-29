#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> coin{3};
    int sum =2;
    int n = coin.size();
    int dp[n+1][sum+1];

    for(int i = 0; i<=sum; i++){
        dp[0][i] = 0;
    }

    for(int i = 0; i<=n; i++){
        dp[i][0] = 1;
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=sum; j++){
            if(coin[i-1]<=j){
                dp[i][j] = dp[i-1][j] + dp[i][j-coin[i-1]];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
        // cout<<endl;
    }
    cout<<dp[n][sum];

    
    // cout<<n;
return 0;
}