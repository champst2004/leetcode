// https://leetcode.com/problems/maximum-candies-allocated-to-k-children/description/

class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int n = candies.size();
        int l = 1;
        int r = 0;
        int res = 0;
        for(int i = 0; i < n; i++){
            r = max(r, candies[i]);
        }
        while(l <= r){
            long long mid = l + (r-l)/2;
            long long children = 0;
            for(int i = 0; i < n; i++){
                children += candies[i]/mid;
            }
            if(children >= k){
                res = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        return res;
    }
};