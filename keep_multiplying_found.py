# https://leetcode.com/problems/keep-multiplying-found-values-by-two/description/

class Solution:
    def findFinalValue(self, nums: list[int], original: int) -> int:
        s = set(nums)
        for num in nums:
            if original in s:
                original *= 2
        return original