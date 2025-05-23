// https://leetcode.com/problems/set-mismatch/description/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        vector<int> count(n+1, 0);
        int realSum = n*(n+1)/2;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            count[nums[i]]++;
        }
        for(int i = 1; i < n + 1; i++){
            if(count[i] > 1) ans.push_back(i);
        }
        ans.push_back(ans[0] + realSum - sum);
        return ans;
    }
};