// https://leetcode.com/problems/binary-gap/

class Solution {
public:
    int binaryGap(int n) {
        int maxi = 0, temp = -1;
        if(!(n & (n - 1))) return 0;
        while(n > 0){
            if(n & 1){
                if(temp != -1) maxi = max(maxi, temp);
                temp = 1;
            }
            else if(temp != -1) temp++;
            n >>= 1;
        }
        return maxi;
    }
};