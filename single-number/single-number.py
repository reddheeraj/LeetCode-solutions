class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        a = {}
        for num in nums:
            if num in a:
                a[num] += 1
            else:
                a[num] = 1
        for k,v in a.items():
            if v == 1:
                return k
            