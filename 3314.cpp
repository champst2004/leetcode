// https://leetcode.com/problems/construct-the-minimum-bitwise-array-i/

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0) continue;
            else{
                for(int j = 0; j < nums[i]; j++){
                    int temp = j | (j+1);
                    if(temp == nums[i]){
                        ans[i] = j;
                        break;
                    }
                }
            }
        }
        return ans;   
    }
};