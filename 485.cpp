// https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxLen = 0, currLen = 0;
        for(int i = 0; i < n; i++){
            if(nums[i]) currLen++;
            else currLen = 0;
            maxLen = max(maxLen, currLen);
        }
        return maxLen;
    }
};