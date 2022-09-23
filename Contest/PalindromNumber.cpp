#include <bits/stdc++.h>
using namespace std;

bool solve(int n){

    for(int i = 2; i<= n-2; i++){
        string s = "";
        int temp = n;
        while(temp>0){
            int dig = temp%i;
            s+=to_string(dig);
            // cout<<dig;
            temp/=i;
        }
        string s1 = s;
        reverse(s.begin(), s.end());
        // cout<<s1<<" "<<s<<endl;
        if(s1 != s){
            return false;
        }
            
        
    }
    return true;
    
}

int main(){
    
    int n = 9;
    cout<<solve(n);
    return 0;
}