// https://leetcode.com/problems/find-players-with-zero-or-one-losses/

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> loss;
        vector<int> l0, l1;
        for(auto i : matches) loss[i[1]]++;
        for(auto i : matches){
            int winner = i[0];
            int loser = i[1];
            if(loss.find(winner) == loss.end()){
                l0.push_back(winner);
                loss[winner] = 2;
            }
            if(loss[loser] == 1) l1.push_back(loser);  
        }
        sort(l0.begin(), l0.end());
        sort(l1.begin(), l1.end());
        return {l0, l1};
    }
};