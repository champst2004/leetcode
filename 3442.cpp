// https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/

class Solution {
public:
    int maxDifference(string s) {
        int freq[26] = {0};
        int maxi = INT_MIN, mini = INT_MAX;
        for(auto i : s) freq[i - 'a']++;
        for(auto i : freq){
            if(i % 2 == 1) maxi = max(maxi, i);
            if(i % 2 == 0 && i != 0) mini = min(mini, i);
        }
        return maxi - mini;
    }
};