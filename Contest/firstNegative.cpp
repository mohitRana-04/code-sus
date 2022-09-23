#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n, int k){
    int i = 0, j = 0;
    queue<int> q;
    
    while(j<n){
        if(j-i+1<k){
            if(v[j]<0){
                q.push(v[j]);
            }
            j++;

        }
        else if(j-i+1 == k){
            if(v[j]<0){
                q.push(v[j]);
            }
            if(q.size() == 0){
                cout<<0<<" ";
            }
            else if(q.size() != 0){
                cout<<q.front();
                if(q.front() == v[i]){
                    q.pop();
                }

            }

            // cout<<endl<<v[i]<<" "<<v[j]<<endl;

            i++;
            j++;
        }

    }
    // for(auto x: result){
    //     cout<< x<< " ";
    // }
}

int main(){
    vector<int> v {-8, 2, 3, -6, 10};
    int n = 5, k = 2;
    solve(v, n, k);
    return 0;
}