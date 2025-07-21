// https://leetcode.com/problems/delete-characters-to-make-fancy-string/

class Solution {
public:
    string makeFancyString(string s) {
        int n = s.length();
        string ans = "";
        if(n == 0) return "";
        ans += s[0];
        for(int i = 1; i < n; i++){
            if(s[i-1] == s[i] and s[i] == s[i+1]) continue;
            else ans += s[i];
        }
        return ans;
    }
};