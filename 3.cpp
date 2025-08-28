// https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;
        int left = 0, right = 0, ans = 0;
        int n = s.length();
        while(right < n){
            char curr = s[right++];
            map[curr]++;
            while(map[curr] > 1){
                map[s[left++]]--;
            }
            ans = max(ans, right - left);
        }
        return ans;
    }
};