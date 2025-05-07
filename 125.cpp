// https://leetcode.com/problems/valid-palindrome/description/

class Solution {
    public:
        bool isPalindrome(string s) {
            int n = s.length();
            string s1 = "", s2 = "";
            for(int i = 0; i < n; i++){
                if(s[i] >= 'A' and s[i] <= 'Z') s1 += (s[i] + 32);
                else if(s[i] >= 'a' and s[i] <= 'z') s1 += s[i];
                else if(s[i] >= '0' and s[i] <= '9') s1 += s[i];
            }
            int len = s1.length();
            for(int i = 0; i < len; i++) s2 += s1[len-1-i];
            return s2 == s1;
        }
    };