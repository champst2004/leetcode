// https://leetcode.com/problems/check-balanced-string/description/

class Solution {
    public:
        bool isBalanced(string num) {
            int evenSum = 0, oddSum = 0;
            for(int i = 0; i < num.size(); i++){
                if(i%2==0) evenSum += num[i] - '0';
                else oddSum += num[i] - '0';
            }
            return evenSum == oddSum;
        }
    };