class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        minPrice = prices[0]
        maxProfit = 0

        for i in range(len(prices)):
            if prices[i] < minPrice:
                minPrice = prices[i] #buying

            profit = prices[i] - minPrice #finding profit

            if profit > maxProfit:
                maxProfit = profit

        return maxProfit

        