from collections import Counter

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        res = Counter(nums)
        print(res)
        for item in res.items():
            if item[1] == 1:
                return item[0]