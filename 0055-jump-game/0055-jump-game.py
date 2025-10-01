class Solution:
    def canJump(self, nums: List[int]) -> bool:
        gas = nums[0]
        i = 1
        while gas:
            if i >= len(nums):
                break
            gas -= 1
            gas = max(gas, nums[i])
            i += 1

        
        return i == len(nums)