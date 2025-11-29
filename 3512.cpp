// https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0, ans  = 0;
        for(auto i : nums) sum += i;
        while(sum % k != 0){
            sum--;
            ans++;
        }
        return ans;
    }
};