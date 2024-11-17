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