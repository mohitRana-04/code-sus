#include <bits/stdc++.h>
using namespace std;


void solve(vector<int> chargeTimes,vector<int> runningCosts, int budget, vector<int> &ans){
    
    int temp = budget;
    int l = 0; r = 0;
    while(r==chargeTimes.size()-1){
        int maxi = INT_MIN; 
        int sum = 0;
        for(int i = l; i<=r; i++){
            maxi = max(chargeTimes[l]);
            sum+=runningCosts[l];
        }

        if(maxi+ (r-l)+sum<= temp){
            r++;
            temp-= maxi+ (r-l)+sum;
            ans.push_back(r-l+1);

        }
        if(max+ (r-l)+sum> temp){
            l++;
            r++;
            temp = budget;
        }
    }
    
}

int main(){
    vector<int> chargeTimes = {3,6,1,3,4};
    vector<int> runningCosts = {2,1,3,4,5};
    int budget = 25;
    vector<int> ans;
    solve(chargeTimes, runningCosts, budget, ans);
    int maxi = INT_MIN;
    for(auto x: ans){
        maxi = max(maxi, x);
    }
    return 0;
}