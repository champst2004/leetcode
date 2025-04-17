// https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/description/

class Solution {
    public:
        int countKDifference(vector<int>& nums, int k) {
            int n = nums.size(), ans = 0;
                for(int i = 0; i < n; i++){
                    for(int j = i + 1; j < n; j++){
                        if(abs(nums[i] - nums[j]) == k) ans++;
                    }
                }
                return ans;
        }
};