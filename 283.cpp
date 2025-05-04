// https://leetcode.com/problems/move-zeroes/description/

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n = nums.size();
            if(n < 2) return;
            int j = 0;
            for(int i = 0; i < n; i++){
                if(nums[i] != 0){
                    swap(nums[i], nums[j]);
                    j++;
                }
            }
        }
    };