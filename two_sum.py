class Solution:
    def twoSum(self, nums, target: int):
        soln =[]
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    soln.append(i)
                    soln.append(j)
                    return soln