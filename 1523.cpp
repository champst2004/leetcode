// https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/

class Solution {
public:
    int countOdds(int low, int high) {
        int x;
        if(low % 2 != 0 && high % 2 != 0) x = high - low + 2;
        else x = high - low + 1;
        return x / 2;
    }
};