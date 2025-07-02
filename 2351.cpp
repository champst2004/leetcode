// https://leetcode.com/problems/first-letter-to-appear-twice/

class Solution {
public:
    char repeatedCharacter(string s) {
        vector<char> vec;
        for(auto i : s){
            for(auto j : vec){
                if(j == i) return j;
            }
            vec.push_back(i);
        }
        return ' ';
    }
};