# https://leetcode.com/problems/check-if-n-and-its-double-exist/description/

class Solution:
    def checkIfExist(self, arr: list[int]) -> bool:
        for i in range(len(arr)):
            for j in range(i+1,len(arr)):
                if arr[i] == 2*arr[j] or arr[i] == 0.5*arr[j]:
                    return True
        return False