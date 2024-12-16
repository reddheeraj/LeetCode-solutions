class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        res = {}
        for i in range(len(nums)):
            if nums[i] not in res:
                res[nums[i]] = 1
            else:
                return True
        return False