# https://leetcode.com/problems/single-number/description

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        dict = {}
        for i in range(len(nums)):
            dict[nums[i]] = 0
        for i in range(len(nums)):
            dict[nums[i]] += 1
        for i in range(len(nums)):
            if dict[nums[i]] == 1:
                return nums[i]