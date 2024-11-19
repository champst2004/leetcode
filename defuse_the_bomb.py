# https://leetcode.com/problems/defuse-the-bomb

class Solution:
    def decrypt(self, code: list[int], k: int) -> list[int]:
        n = len(code)
        new = [0] * n
        if k == 0:
            return new
        if k > 0:
            for i in range(n):
                for j in range(1,k+1):
                    new[i] += code[(i+j)%n]
        if k < 0:
            for i in range(n):
                for j in range(k,0):
                    new[i] += code[(i+j)%n]

        return new