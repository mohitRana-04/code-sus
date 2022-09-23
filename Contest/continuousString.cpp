#include <bits/stdc++.h>
using namespace std;

solve(string s){
    vector<int> v;
    for(auto x: s){
        v.push_back(int(x)-96);
    }
    // for(auto x: v){
    //     cout<<x<<" ";
    // }
    int ans = 1;
    int max_ans = 0;
    int step = 1;
    while(step<v.size()){
        max_ans = max(max_ans, ans);
        int temp = v[step]-v[step-1];
        // cout<<temp;
        if(temp == 1){
            // cout<<ans<<" ";
            ans+=1;
            // cout<<ans<< " ";
        }
        else{
            ans = 1;
        }
        step++;
    }
    max_ans = max(max_ans, ans);
    cout<<endl<<max_ans;
}

int main(){
    string s = "abcde";
    solve(s);
    return 0;
}