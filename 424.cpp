// https://leetcode.com/problems/longest-repeating-character-replacement/

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int maxLen = 0, maxFreq = 0, left = 0, right = 0;
        unordered_map<char, int> map;
        while(right < n){
            map[s[right]]++;
            maxFreq = max(maxFreq, map[s[right]]);
            while((right - left + 1 - maxFreq) > k) map[s[left++]]--;
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
};