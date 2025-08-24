// https://leetcode.com/problems/minimum-size-subarray-sum/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLen = INT_MAX;
        int i = 0;
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += nums[j];
            while(sum >= target){
                minLen = min(minLen, j - i + 1);
                sum -= nums[i];
                i++;
            }
        }
        if(minLen == INT_MAX) return 0;
        return minLen;
    }
};