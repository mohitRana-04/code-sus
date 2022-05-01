class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
        vector<vector<int>> res; 
        // initializing result vector
        sort(num.begin(), num.end()); 
        // sorting the array
        // moves for a
        // starting from first to third lsat element of the array
        for (int i = 0; i < (int)(num.size())-2; i++) {
            // checking if its first element and if a is same as of previous to skip this that's why !
            if (i == 0 || (i > 0 && num[i] != num[i-1])) {
                // now initialzing two pointer first form i+1 and second to last
                int lo = i+1, hi = (int)(num.size())-1, sum = 0 - num[i];
                // now comparing low<high
                while (lo < hi) {
                    // if it is equals to the sum of the array then we can we can store in the newtemp array and then add this array to the result
                    if (num[lo] + num[hi] == sum) {
                        
                        vector<int> temp; 
                        // adding i lo abd hi because its is in increasing order
                        temp.push_back(num[i]); 
                        temp.push_back(num[lo]); 
                        temp.push_back(num[hi]); 
                        res.push_back(temp);
                        // for comparing that if li and hi next element is same respectively then we skip and move to next elmenet
                        while (lo < hi && num[lo] == num[lo+1]) lo++;
                        while (lo < hi && num[hi] == num[hi-1]) hi--;
                        // optherwise just keep updateing
                        lo++; hi--;
                    } 
                    // if is is grater thann the sum then we can just h-- and small then low++
                    else if (num[lo] + num[hi] < sum) lo++;
                    else hi--;
               }
            }
        }
        // return ing the result
        return res;
    }
};