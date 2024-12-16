class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        res = {}
        for i in range(len(nums)):
            if nums[i] not in res:
                res[nums[i]] = 1
            else:
                res[nums[i]] += 1
        for i in res:
            if res[i]==1:
                return i