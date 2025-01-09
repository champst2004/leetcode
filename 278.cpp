// https://leetcode.com/problems/first-bad-version/description

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(isBadVersion(mid) && !isBadVersion(mid - 1)) return mid;
            else if(isBadVersion(mid)) r = mid;
            else l = mid + 1;
        }
        return -1;
    }
};