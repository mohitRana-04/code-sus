// dont confuse between subsequence and substring
// subsequence is discontinuous and substring is continuous
#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, int n, int m){
    if(n == 0 || m == 0){
        return 0;
    }
    if(s1[n-1]==s2[m-1]){
        return 1+lcs(s1, s2, n-1, m-1);
    }
    else{
        return max(lcs(s1, s2, n, m-1), lcs(s1, s2, n-1, m));
    }
}

int main(){
    // 

    string s1 = "ylqpejqbalahwr";
    int n = s1.size();
    string s2 = "yrkzavgdmdgtqpg";
    int m = s2.size();
    // cout<<n<<m;
    cout<<lcs(s1, s2, n, m);

return 0;
}