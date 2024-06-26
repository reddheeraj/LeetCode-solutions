class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        n = len(candies)
        result = n * [False]
        lar = max(candies)
        for i in range(n):
            if candies[i] + extraCandies >= lar:
                result[i] = True
        return result