#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums1[] = {4, 1, 2};
    int arr[] = {1, 3, 4, 2};
    stack<int> s;
    vector<int> v;
    vector<int> ans;
    unordered_map<int, int> mp;
    // cout<<nums1[2];

    // taking nums2 = {1, 3, 4, 2}
    // output -> {3, 4, -1, -1}
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = n-1; i >= 0; i--){
        // cout<<i;
        // cout<<arr[i];
        // {reverse array -> 2, 4, 3, 1}

        if(s.empty()){
            mp[arr[i]] = -1;
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()>arr[i]){
            mp[arr[i]] = s.top();
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()<=arr[i]){
            while(!s.empty() && s.top()<=arr[i]){
                s.pop();
            }
            if(s.empty()){
                mp[arr[i]] = -1;
                v.push_back(-1);
            }
            else{
                mp[arr[i]] = s.top();
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
        

    }

    for(int i = 0; i< sizeof(nums1)/sizeof(nums1[0]); i++){
        ans.push_back(mp[nums1[i]]);
    }
    for(auto x: ans){
        cout<<x;
    }


    

    // for(){
    //     mp.insert({})
    // }

    

return 0;
}