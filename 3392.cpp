// https://leetcode.com/problems/count-subarrays-of-length-three-with-a-condition/description/

class Solution {
    public:
        int countSubarrays(vector<int>& nums) {
            int count = 0, n = nums.size();
            for(int i = 1; i < n - 1; i++){
                if(nums[i - 1] + nums[i + 1] == nums[i]/2.0) count++;
            }
            return count;
        }
    };