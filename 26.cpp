// https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/

class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int k = 0;
            int n = nums.size();
            for(int i = 1; i < n; i++){
                if(nums[k] != nums[i]) nums[++k] = nums[i];
            }
            return ++k;
        }
};