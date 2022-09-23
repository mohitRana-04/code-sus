#include <bits/stdc++.h>

using namespace std;

/*
if(k == 0 && start == end){
            return 1;
        }
        if(k == 0 && start != end){
            return 0;
        } 
        return numberOfWays(start-1, end, k-1)+ numberOfWays(start+1, end, k-1);
*/

int dp[3007][1005];
long long mod = 1e9+7;

int solve(int start, int end, int k){
    
    if(k == 0 && start == end){
        return 1;
    }
    if(k == 0){
        return 0;
    }

    if(dp[start+1000][k] != -1){
        return dp[start+1000][k];
    }
    int n = solve(start-1, end, k-1)%mod; 
    int m = solve(start+1, end, k-1)%mod;
    dp[start+1000][k] = n+m;
    return n+m;

}

int main(){
    int start = 2;
    int end = 5;
    int k = 10;
    memset(dp, -1, sizeof(dp));
    cout<<solve(start, end, k);
    return 0;
}


