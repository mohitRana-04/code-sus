#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{1, 2, 5};
    int amount = 11;
    int n = v.size();
    int dp[n+1][amount+1];

    for(int i =0; i<=amount; i++){
        dp[0][i] = INT_MAX-1;
    }
    for(int i = 0; i<=n; i++){
        dp[i][0] = 0;
    }

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<= amount; j++){
            // cout<<dp[i][j]<<" ";
            if(v[i-1]<=j){
                dp[i][j] = min(dp[i-1][j], dp[i][j-v[i-1]]+1) ;
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
        // cout<<endl;
    }
    if(dp[n][sum]>10000000){
        cout<<-1;
    }
    else{

    cout<<dp[n][amount];
    }
    

return 0;
}