class Solution:
    def intersection(self, nums1: list[int], nums2: list[int]) -> list[int]:
        s1 = set(nums1)
        s2 = set(nums2)
        result = []
        for i in s1:
            if i in s2:
                result.append(i)
        return result