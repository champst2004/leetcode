// https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/description

class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            sort(nums.begin(), nums.end());
            int ans = 0;
            int start = nums[0];
            int n = nums.size();
            if(start < k) return -1;
            for(int i = 0; i < n; i++){
                if(nums[i] > k){
                    ans++;
                    while((i + 1 < n) and (nums[i] == nums[i+1])) i++;
                }
            }
            return ans;
        }
};