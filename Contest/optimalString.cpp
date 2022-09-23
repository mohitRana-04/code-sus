#include <bits/stdc++.h>
using namespace std;

void solve(string s){
    set<char> st;
    int ans = 1;

    for(auto x: s){
        // not present
        if(st.find(x) == st.end()){
            st.insert(x);
        }
        else{
            st.clear();
            ans++;
            st.insert(x);
        }
    }
    cout<<ans;

    
}

int main(){
    string s = "abacaba";
    solve(s);
    return 0;
}