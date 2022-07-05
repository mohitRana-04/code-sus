#include <bits/stdc++.h>
using namespace std;

int main(){
    string a = "heap";
    string b = "pea";
    int n = a.size();
    int m = b.size();
    // cout<<n<<m;
    int dp[n+1][m+1];
    for(int i = 0; i<= n; i++){
        
        dp[i][0] = 0;
        
    }
    for(int i = 0; i<= m; i++){
        
        dp[0][i] = 0;        
    }
    for(int i = 1; i<= n; i++){
        for(int j = 1; j<=m; j++){
            if(a[i-1]==b[i-1]){
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[n][m];

    // int dp[]
    return 0;
}