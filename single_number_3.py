# https://leetcode.com/problems/single-number-iii/

class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        dict = {}
        lst = []
        for i in range(len(nums)):
            dict[nums[i]] = 0
        for i in range(len(nums)):
            dict[nums[i]] += 1
        for i in range(len(nums)):
            if dict[nums[i]] == 1:
                lst.append(nums[i])
        return lst