#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int maxi = 0;
        int min = 0;
        int n; cin>>n;
        for(int i = 0; i< n; i++){
            int temp; cin>>temp;
            maxi= max(maxi, temp);
            min = min(min, temp);
        }
        cout<<max-min<<endl;
    }   
    return 0;
}