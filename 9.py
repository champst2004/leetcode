# https://leetcode.com/problems/palindrome-number/

class Solution:
    def isPalindrome(self, x: int) -> bool:
        num = str(x)
        if num == num[::-1]:
            return True
        return False
    
# CPP

class Solution {
public:
    bool isPalindrome(int x) {
        if(x == 0) return true;
        string str1 = to_string(x), str2 = "";
        int temp;
        while(x > 0){
            str2 += x % 10 + '0';
            x = x/10;
        }
        return str1 == str2;
    }
};