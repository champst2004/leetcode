// https://leetcode.com/problems/ugly-number/description/

class Solution {
    public:
        bool isUgly(int n) {
            if(n == 0) return false;
            int nums[] = {2, 3, 5};
            for(auto i : nums){
                while(n % i == 0){
                    n = n / i;
                }
            }
            return n == 1;
        }
    };