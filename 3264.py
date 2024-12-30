# https://leetcode.com/problems/final-array-state-after-k-multiplication-operations-i

class Solution:
    def getFinalState(self, nums: list[int], k: int, multiplier: int) -> list[int]:
        for i in range(k):
            min = float("inf")
            pointer = -1
            for i in range(len(nums)):
                if nums[i] < min:
                    min = nums[i]
                    pointer = i
            nums[pointer] *= multiplier
        return nums