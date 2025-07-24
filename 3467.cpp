// https://leetcode.com/problems/transform-array-by-parity/

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] % 2) ans.push_back(1);
            else ans.push_back(0);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};