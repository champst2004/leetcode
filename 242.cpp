// https://leetcode.com/problems/valid-anagram/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() == t.length()){
            vector<int> map(26, 0);
            for(auto i : s) map[i - 'a']++;
            for(auto i : t) map[i - 'a']--;
            for(auto i : map) if(i != 0) return false;
            return true;
        }
        return false;
    }
};