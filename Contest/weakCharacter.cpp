#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &v){
    int n = v.size();
    sort(v.begin(), v.end());
    int counter = 0;

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            cout<<v[i][1]<<" "<<v[j][1]<<endl;
            if(v[i][1]<v[j][1]){

                
            }
        }
    }
    cout<<counter;
}

int main(){
    vector<vector<int>> v{{5, 5}, {6, 3}, {3, 6}};
    solve(v);
    // cout<<"HEllo";
    
    return 0;
}