// https://leetcode.com/problems/count-the-number-of-fair-pairs/

class Solution {
    public:
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            sort(nums.begin(), nums.end());
            return count(nums, upper + 1) - count(nums, lower);
        }
        long long count(vector<int> nums, int sum){
            int l = 0;
            int r = nums.size() - 1;
            long long ans = 0;
            while(l < r){
                int currSum = nums[l] + nums[r];
                if(currSum < sum){
                    ans += (r - l);
                    l++;
                }
                else r--;
            }
            return ans;
        }
};