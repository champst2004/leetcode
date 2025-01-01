// https://leetcode.com/problems/number-complement/

class Solution {
public:
    int findComplement(int n) {
        int count = 0;
        int a = n;
        int mask = 0;
        if (n == 0)
            return 1;
        while(a != 0){
            a = a >> 1;
            count++;
        }
        for(int i = 0; i < count; i++){
            mask = mask << 1;
            mask = mask | 1;
        }
        return (mask & ~n);
    }
};