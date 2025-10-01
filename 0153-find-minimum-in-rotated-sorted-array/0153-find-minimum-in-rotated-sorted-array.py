class Solution:
    def findMin(self, nums: List[int]) -> int:
        left, right = 0, len(nums) - 1
        min_n = nums[0]
        while left <= right:
            mid = (left + right) // 2
            
            if nums[mid] >= nums[left]:
                min_n = min(min_n, nums[left])
                left = mid + 1
            elif nums[mid] <= nums[right]:
                min_n = min(min_n, nums[mid])
                right = mid - 1
        return min_n