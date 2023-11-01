class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_profit = 0
        min_price = math.inf

        for i in prices:
            if i < min_price:
                min_price = i
            elif (i-min_price) > max_profit:
                max_profit = i-min_price
            
        return max_profit