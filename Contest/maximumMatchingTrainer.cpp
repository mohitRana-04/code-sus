#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> players, vector<int> trainers){
    sort(players.begin(), players.end());
    sort(trainers.begin(), trainers.end());

    
        // use while loops
        // int p_counter = 0, t_counter = 0; 
    int p_step = 0, t_step = 0;
    int ans = 0;
    while(p_step< players.size() && t_step<trainers.size()){
        if(players[p_step]<=trainers[t_step]){
                // cout<<players[p_step] <<" "<< trainers[t_step]<<endl;
            p_step++, t_step++;
            ans++;
        }
        else{
                // cout<<players[p_step] <<" "<< trainers[t_step]<<endl;
            t_step++;
       }
    }   
    cout<<ans<<endl;
    
}

int main(){
    vector<int> players = {1, 1, 1};
    vector<int> trainers = {10};

    solve(players, trainers);
    return 0;
}