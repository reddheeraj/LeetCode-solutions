class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        curr_sum = 0
        largest_sum = nums[0]
        for num in nums:
            curr_sum += num
            largest_sum = max(largest_sum, curr_sum)
            if curr_sum < 0:
                curr_sum = 0
        return largest_sum