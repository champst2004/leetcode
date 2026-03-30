// https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int k = p.size();
        int n = s.size();
        vector<int> map(26, 0), window(26, 0);
        for(auto i : p) map[i - 'a']++;
        for(int i = 0; i < n; i++){
            window[s[i] - 'a']++;
            if(i >= k) window[s[i-k] - 'a']--;
            if(i >= k - 1 and map == window) ans.push_back(i-k+1);
        }
        return ans;
    }
};