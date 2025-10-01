class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        prev_max = prev_min = nums[0]
        result = nums[0]
        for num in nums[1:]:
            curr_max = max(num, prev_max * num, prev_min * num)
            curr_min = min(num, prev_max * num, prev_min * num)
            prev_max, prev_min = curr_max, curr_min
            result = max(result, curr_max)
            print(f"curr_max = {curr_max}, curr_min = {curr_min}")
            print(f"prev max = {prev_max}, prev_min = {prev_min}")
        return result

