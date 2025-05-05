# https://leetcode.com/problems/plus-one/description/

class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        num = 0
        new = []
        for i in range(len(digits) - 1, -1, -1):
            num += digits[i] * (10 ** (len(digits) - 1 - i))
        num += 1

        while num > 0:
            new.insert(0, num % 10)
            num = num // 10

        return new

# CPP

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n - 1; i > -1; i--){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            else digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};