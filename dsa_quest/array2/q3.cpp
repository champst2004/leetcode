// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size() + 1;
        vector<int> count(n, 0);
        vector<int> ans;
        for(auto i : nums) count[i]++;
        for(int i = 1; i < n; i++){
            if(count[i] == 0) ans.push_back(i);
        }
        return ans;
    }
};