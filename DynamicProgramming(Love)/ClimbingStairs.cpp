#include <bits/stdc++.h>
using namespace std;

int helper(int n, vector<int> v ){
    if(n>=v.size()){
        return 0;
    }
    else{
        
        int op1 = helper(n+1, v);
        int op2 = helper(n+2, v);

        return min(op1, op2)+v[n];
    }
}

int main(){
    
    vector<int> v{1,100,1,1,1,100,1,1,100,1};
    cout << (min(helper(0, v),helper(1,v)));
return 0;
}