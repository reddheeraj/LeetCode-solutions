class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l = 0
        total_len = len(nums)
        dummy = {}
        while l < total_len:
            if ((target - nums[l]) in nums) and (nums.index(target-nums[l]) != l):
                return [l, nums.index(target-nums[l])]
            else:
                l += 1
        