#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int> chairs, vector<int> passengers){
    unordered_map<int, int> mp;
    int count = 0;
    for(int i = 0; i<n; i++){
        if(passengers[i] == chairs[i]) continue;
        if(chairs[i] != 0){
            
            count = count+abs(passengers[i]-chairs[i]);
            cout<<count<<endl;
            chairs[i] = 0;
        }
        else if(chairs[i] == 0){

            count = count+abs(passengers[i]-chairs[i+1]);
            cout<<count<<endl;
            chairs[i+1] = 0;
        }
        else if(i!= 0 && chairs[i] == 0){
            count = count+abs(passengers[i]-chairs[i-1]);
            cout<<count<<endl;
            chairs[i-1] = 0;
        }
    }
    cout<<count;
}

int main(){

    /*
    7

3 5 5 10 5 4 3
    */
    vector<int> chairs{3, 1, 5};
    vector<int> passengers{2, 7, 4};
    int n = chairs.size();
    solve(n, chairs, passengers);
    return 0;
}