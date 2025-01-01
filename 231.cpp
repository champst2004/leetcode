// https://leetcode.com/problems/power-of-two/description/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        while (n != 0){
            if((n % 2) == 1)
                count++;
            n = n / 2;
        }
        return count == 1;
    }
};