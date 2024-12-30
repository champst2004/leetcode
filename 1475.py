# https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/description

class Solution:
    def finalPrices(self, prices: list[int]) -> list[int]:
        for i in range(len(prices)):
            for j in range(i+1,len(prices)):
                if prices[i] >= prices[j]:
                    prices[i] -= prices[j]
                    break
        return prices