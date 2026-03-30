// https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();
        int n = s2.size();
        vector<int> map(26, 0), window(26, 0);
        for(auto i : s1) map[i - 'a']++;
        for(int i = 0; i < n; i++){
            window[s2[i] - 'a']++;
            if(i >= k) window[s2[i - k] - 'a']--;
            if(i >= k - 1) if(window == map) return true;
        }
        return false;
    }
};