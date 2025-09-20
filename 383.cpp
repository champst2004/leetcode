// https://leetcode.com/problems/ransom-note/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map;
        for(auto i : magazine) map[i]++;
        for(auto i : ransomNote){
            if(map[i]){
                map[i]--;
                if(map[i] == 0) map.erase(i);
            }
            else return false;
        }
        return true;
    }
};