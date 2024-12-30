# https://leetcode.com/problems/roman-to-integer/

class Solution:
    def romanToInt(self, s: str) -> int:
        count = 0
        for i in range(len(s)):
            if s[i] == 'I':
                count += 1
            if s[i] == 'V':
                if s[i - 1] == 'I' and i != 0:
                    count -= 2
                count += 5
            if s[i] == 'X':
                if s[i - 1] == 'I' and i != 0:
                    count -= 2
                count += 10
            if s[i] == 'L':
                if s[i - 1] == 'X' and i != 0:
                    count -= 20
                count += 50
            if s[i] == 'C':
                if s[i - 1] == 'X' and i != 0:
                    count -= 20
                count += 100
            if s[i] == 'D':
                if s[i - 1] == 'C' and i != 0:
                    count -= 200
                count += 500
            if s[i] == 'M':
                if s[i - 1] == 'C' and i != 0:
                    count -= 200
                count += 1000
        return count
