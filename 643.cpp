// https://leetcode.com/problems/maximum-average-subarray-i/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double maxSum = 0;
        double currSum = 0;
        for(int i = 0; i < k; i++) currSum += nums[i];
        maxSum = currSum;
        for(int i = k; i < n; i++){
            currSum = currSum - nums[i - k] + nums[i];
            maxSum = max(maxSum, currSum);
        }
        return maxSum / k;
    }
};