#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums{1,5,11,5};
    // cout<<nums[2];

    // considering a matrix with i and j
    // i is the number of elements present in array
    // which is(4) 0 -> 4 (1 extra)
    // j is the total sum

    int n = nums.size();
    int sum = 0;
    for(auto x: nums){
        sum+=x;
    }
    cout<< sum;

return 0;
}