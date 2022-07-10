#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "abc";
    string t = "ahbgdc";
    
    int n = s.size();
    int m = t.size();

    int dp[n+1][m+1];

    // initializing
    for(int i = 0; i<n+1; i++){
        dp[i][0] = 0;
    }
    for(int i = 0; i<m+1; i++){
        dp[0][i] = 0;
    }

    for(int i = 1; i<n+1; i++){
        // dp[i][0] = 0;
        for(int j = 1; j<m+1; j++){
            // cout<<dp[i][j];
            if(s[i-1] == t[j-1]){
                dp[i][j] = 1+ dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        // cout<<endl;
    }
    cout<<dp[n][m];

    return 0;
}