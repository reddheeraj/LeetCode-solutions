class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        n = len(candies)
        result = n * [False]
        lar = candies[0]
        for i in range(1, n):
            if lar < candies[i]:
                lar = candies[i]
        for i in range(n):
            if candies[i] + extraCandies >= lar:
                result[i] = True
        return result