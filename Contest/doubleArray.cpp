#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v){
    if(v.size()%2 != 0){ 
        cout<<"Not Possible"<<endl;
    }
    unordered_map<int, int> mp;
    for(auto x: v){
        mp[x]++;
    }

    // for(auto x: mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

    sort(v.begin(), v.end());

    for(int i = 0; i< v.size(); i++){
        if(mp[v[i]] == 0) continue;

        if(mp[2*v[i]] == 0) cout<<"False";
        cout<<v[i];
        mp[v[i]] --;
        mp[2*v[i]] --;
    }
}

int main(){
    vector<int> v{1,3,4,2,6,8};
    solve(v);
    return 0;
}