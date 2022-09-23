#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v1, vector<int> v2){
    int dp[v1.size()+1][v2.size()+1];

    for(int i = 0; i< v1.size(); i++){
        dp[i][0] = 0;
    }
    for(int i = 0; i< v2.size(); i++){
        dp[0][i] = 0;
    }

    // dp[0][0] = 1;

    int ans = 0;
    for(int i = 1; i< v1.size(); i++){
        for(int j = 1; j< v2.size(); j++){
            if(v1[i-1] == v2[j-1]){
                dp[i][j] = 1+ dp[i-1][j-1];
            }
            else{
                dp[i][j] = 0;
                
            }
            ans = max(ans, dp[i][j]);
        }
    }
    // cout<<dp[v1.size()-1][v2.size()-1];
    cout<<ans;
}

int main(){
    vector<int> v1{1,2,3,2,1};
    vector<int> v2{3,2,1,4,7};

    solve(v1, v2);
    return 0;
}

