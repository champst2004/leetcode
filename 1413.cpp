// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/description/

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n + 1, 0);
        for(int i = 0; i < n; i++){
            prefix[i+1] = prefix[i] + nums[i];
        }
        for(int i = 0; i < n; i++){
            cout << prefix[i+1];
        }
        int temp = 0;
        for(int i = 0; i < n; i++){
            if(prefix[i+1] < 1){
                temp = min(temp, prefix[i+1]);
            }
        }
        return temp * -1 + 1;
    }
};