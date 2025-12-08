// https://leetcode.com/problems/build-an-array-with-stack-operations/

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int x = target[target.size()-1];
        vector<int> count(x+1, 0);
        for(auto i : target) count[i]++;
        for(int i = 1; i <= x; i++){
            if(count[i] == 1) ans.push_back("Push");
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
    }
};