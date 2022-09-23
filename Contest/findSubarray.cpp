#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v){
    unordered_set<int> s;
    for(int i = 0; i<= v.size()-2; i++){
        if(s.find(v[i]+v[i+1]) != s.end()){
            cout<<"True"<<endl;
            break;
        }
        cout<<v[i]<<" "<<v[i+1];
        s.insert(v[i]+v[i+1]);

    }
    cout<<"fasle";
}

int main(){

    vector<int> v{4,2,4};
    solve(v);
    return 0;
}