class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        
        max_profit = 0
        n = len(prices)
#         for i in range(n-1):
#             for j in range(i+1, n):
#                 max_profit = max(max_profit, prices[j] - prices[i])
        
#         return max_profit

        i = prices[0]
        for j in prices[1:]:
            if i > j:
                i = j
            max_profit = max(max_profit, j-i)
        return max_profit
            