class Solution {
public:
    void rotate(vector<int>& nums, int k) {
//         here k is storing size of the array
        int size=nums.size();
        k%=size;
//         k=k%length of array
        
//         we are reversing already becuase we need to reverse at the end
//         note we have change when we have to do anticlcokwise this is for clockwise
        reverse(nums.begin(),nums.end());
//         reverseing from start to the k inde which is given
        reverse(nums.begin(),nums.begin()+k);
//         from k to the end
        reverse(nums.begin()+k,nums.end());
    }
};