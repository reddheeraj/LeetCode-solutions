class Solution:
    def findMin(self, nums: List[int]) -> int:
        left = 0
        right = len(nums) - 1
        minv = nums[0]
        while left <= right:
            mid = (left + right) // 2

            if nums[mid] >= nums[left]:
                minv = min(minv, nums[left])
                left = mid + 1
            else:
                minv = min(minv, nums[mid])
                right = mid - 1
        return minv