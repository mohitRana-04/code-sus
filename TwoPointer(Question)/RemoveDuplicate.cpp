#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1, 1, 2};
    vector<int> v_new;
    int l=0, r=1;
    while(r<=v.size())
    {
        if(v[l]==v[r])
        {
            v_new.push_back(v[l])
            r++;
            l = r++;
        }
    }
return 0;
}