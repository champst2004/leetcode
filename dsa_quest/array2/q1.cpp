// https://leetcode.com/problems/set-mismatch/

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int repeated;
        unordered_map<int, int> map;
        for(auto i : nums){
            map[i]++;
            sum += i;
        }
        for(auto i : map){
            if(i.second == 2) repeated = i.first;
        }
        int realSum = n*(n+1)/2;
        sum -= repeated;
        return {repeated, realSum - sum};
    }
};