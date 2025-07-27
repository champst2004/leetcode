// https://leetcode.com/problems/count-hills-and-valleys-in-an-array/

class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 1; i < n - 1; i++){
            int j = i;
            while(j + 1 < n and nums[j] == nums[j+1]) j++;
            if(j + 1 < n){
                if(nums[i-1] > nums[i] and nums[j] < nums[j+1]) count++;
                else if(nums[i-1] < nums[i] and nums[j] > nums[j+1]) count++;  
            }
        }
        return count;
    }
};