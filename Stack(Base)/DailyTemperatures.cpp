#include <bits/stdc++.h>
using namespace std;

int main(){
    int temperatures[] = {73,74,75,71,69,72,76,73};

    vector<int> v;
    stack<int> s;
// sotring index in stack and vector
// so comparing temperature[s.top()]
    for(int i = sizeof(temperatures)/sizeof(temperatures[0])-1; i>=0; i--){
        // cout<<temperatures[i];
        if(s.empty()){
            v.push_back(0);
        }
        else if(!s.empty() && temperatures[s.top()]>temperatures[i]){
            v.push_back(s.top()-i);
        }

        else if(!s.empty() && temperatures[s.top()]<=temperatures[i]){
            while(!s.empty() && temperatures[s.top()]<=temperatures[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(0);
            }
            else{
                v.push_back(s.top()-i);
            }
        }
        s.push(i);
    }
    reverse(v.begin(), v.end());
    for(auto x: v){
        cout<<x;
    }

return 0;
}