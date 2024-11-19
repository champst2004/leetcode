# https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k

class Solution:
    def maximumSubarraySum(self, nums: list[int], k: int) -> int:
        n = len(nums)
        curr_sum = 0
        max_sum = 0
        Set = set()
        l = 0

        for i in range(n):
            while nums[i] in Set or (i - l + 1) > k:
                Set.remove(nums[l])
                curr_sum -= nums[l]
                l += 1
            
            Set.add(nums[i])
            curr_sum += nums[i]

            if i - l + 1 == k:
                max_sum = max(max_sum, curr_sum)
        return max_sum

a = Solution()
print(a.maximumSubarraySum([1,5,4,2,9,9,9], 3))