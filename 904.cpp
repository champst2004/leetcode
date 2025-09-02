// https://leetcode.com/problems/fruit-into-baskets/

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int maxLen = 0;
        unordered_map<int, int> count;
        int j = 0;
        for(int i = 0; i < n; i++){
            count[fruits[i]]++;
            while(count.size() > 2){
                count[fruits[j]]--;
                if(count[fruits[j]] == 0) count.erase(fruits[j]);
                j++;
            }
            maxLen = max(maxLen, i - j + 1);
        }
        return maxLen;
    }
};