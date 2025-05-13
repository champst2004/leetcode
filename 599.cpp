// https://leetcode.com/problems/minimum-index-sum-of-two-lists/

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int mini = INT_MAX;
        int n = list1.size();
        int m = list2.size();
        vector<string> ans;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(list1[i] == list2[j]){
                    if(i + j < mini){
                        mini = i + j;
                        ans.clear();
                        ans.push_back(list1[i]);
                    }
                    else if(i + j == mini){
                        ans.push_back(list1[i]);
                    }
                }
            }
        }
        return ans;
    }
};