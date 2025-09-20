// https://leetcode.com/problems/max-consecutive-ones-iii/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLen = 0, zeroCount = 0, left = 0;
        int n = nums.size();
        for(int right = 0; right < n; right++){
            if(!nums[right]) zeroCount++;
            while(zeroCount > k){
                if(!nums[left++]) zeroCount--;
            }
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};