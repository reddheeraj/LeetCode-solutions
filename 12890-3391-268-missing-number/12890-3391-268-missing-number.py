class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        total_sum = sum(range(0, len(nums)+1))
        given_sum = sum(nums)

        return total_sum - given_sum