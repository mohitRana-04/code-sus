#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums){
    map<int, int> mp;
    for(int i = 0; i< nums.size(); i++){
        if(nums[i]%2==0){
            mp[nums[i]]++;
        }
        // cout<<nums[i]<<" "<<mp[nums[i]]<<endl;
    }
    int ans = 0, result;
    for (auto& it : mp) {
        cout << it.first << ' '<< it.second << '\n';
        if(it.second>ans){
            result = it.first;
            ans = it.second;
        }
    }
    cout<<result;
    

    
}

int main(){
    vector<int> nums{6, 6, 6, 0,1,2,2,4, 4, 4,4,1};
    // sort(
    solve(nums);
    return 0;
}