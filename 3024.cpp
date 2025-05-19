// https://leetcode.com/problems/type-of-triangle/description/

class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0] + nums[1] > nums[2] and nums[1] + nums[2] > nums[0] and nums[2] + nums[0] > nums[1]){
            if(nums[0] == nums[1] and nums[1] == nums[2]) return "equilateral";
            if(nums[0] == nums[1] or nums[1] == nums[2] or nums[0] == nums[2]) return "isosceles";
            else if(nums[0] != nums[1] or nums[1] != nums[2] or nums[0] != nums[2]) return"scalene";
        }
        return "none";
    }
};