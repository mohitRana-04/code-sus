#include <bits/stdc++.h>
using namespace std;

void solve(string s, vector<int> v){

    unordered_map<char, int> mp;
    for (int i = 0; i< s.size(); i++)
    {
        
    
       
        if(mp[s[i]]){
            
            // cout<<i<<" - "<<mp[s[i]]-1<<" "<<target<<" "<<endl;
            int sub = int(s[i]);
            int target = sub - 97;
            // cout<<target;
            // cout<<i<<" "<<mp[s[i]]-1<<" "<<v[target]<<endl;
            int store = i -(mp[s[i]]+1)+1;
            int check = v[target];
            cout<<store <<" "<<check<<endl;
            // if( == v[target]){
            //     cout<<"done";
            // }
            // else{
            //     cout<<"false"<<endl;   
            // }

        }
        
        
        

        mp[s[i]] = i+1;
        
        
    }
    // return true;
    // return true;
    // for(auto x: mp){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
}

int main(){
    string s = "abaccb";
    vector<int> v{1,3,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    solve(s, v);
    return 0;
}