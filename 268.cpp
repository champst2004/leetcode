// https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n * (n + 1)) / 2;
        int realSum = 0;
        for (int i = 0; i < n; i++){
            realSum += nums[i];
        }
        return sum - realSum;
    }
};