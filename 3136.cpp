// https://leetcode.com/problems/valid-word/

class Solution {
public:
    bool alphaNum(char ch){
        if((ch >= 'a' and ch <= 'z') or (ch >= '0' and ch <= '9')){
            return true;
        }
        return false;
    }
    bool isVowel(char ch){
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u') return true;
        return false;
    }
    bool isValid(string word) {
        int n = word.length();
        int vowel = 0, consonant = 0;
        if(n < 3) return false;
        for(int i = 0; i < n; i++){
            char x = tolower(word[i]);
            if(!alphaNum(x)) return false;
            if(alphaNum(x)){
                if(isVowel(x)) vowel++;
                else if(!(x >= '0' and x <= '9')) consonant++;
            }
        }
        return vowel > 0 and consonant > 0;
    }
};