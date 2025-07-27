// https://leetcode.com/problems/length-of-last-word/description/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int ans = 0;
        for(int i = n - 1; i > -1; i--){
            if(s[i] == ' ') n--;
            else break;
        }
        for(int i = n - 1; i > -1; i--){
            if(s[i] != ' ') ans++;
            else break;
        }
        return ans;
    }
};