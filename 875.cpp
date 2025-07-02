// https://leetcode.com/problems/koko-eating-bananas/description/

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 0;
        int r = *max_element(piles.begin(), piles.end());
        int res;
        while(l <= r){
            int mid = l + (r-l)/2;
            int speed = 0;
            for(int k : piles) speed += (k + mid - 1)/mid;
            if(speed <= h){
                res = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return res;
    }
};