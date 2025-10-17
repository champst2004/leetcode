// https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n, ans = 0;
        for(auto i : nums){
            n = 0;
            while(i > 0){
                n++;
                i = i / 10;
            }
            if(!(n % 2)) ans++;
        }
        return ans;
    }
};