// https://leetcode.com/problems/valid-perfect-square/description/

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        int l = 1;
        int r = num;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(mid == (double)num/mid) return true;
            else if(mid < (double)num/mid) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};