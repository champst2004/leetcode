// https://leetcode.com/problems/max-consecutive-ones/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int count = 0;
        for(auto i : nums){
            if(i == 1){
                count++;
            }
            else count = 0;
            ans = max(ans, count);
        }
        return ans;
    }
};