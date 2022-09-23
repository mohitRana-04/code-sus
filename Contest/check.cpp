#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k, vector<string> &v, string s){
    if(n == 1){
        v.push_back(to_string(1));
        s.push_back(1);
        return 1;
    }
    int temp = n%k;
    if(temp == 0){
        v.push_back(to_string(temp));
        s.push_back(temp);
        return solve(n/k, k, v, s);
    }
    else{
        v.push_back(to_string(temp));
        s.push_back(temp);
        return solve(n/k, k, v, s);
    }
    
    
} 


int main(){
    int n = 9;
    string s = "";
    vector<string> v;
    solve(n, 4, v, s);

    for(auto x: v){
        cout<<x<<" ";
    }

    return 0;
}