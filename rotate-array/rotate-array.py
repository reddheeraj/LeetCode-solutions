class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k = k % n
        
        # ans = [0] * n
        
        # for i in range(n):
        #     ans[(i + k) % n] = nums[i]
        # for i in range(n):
        #     nums[i] = ans[i]
        nums.reverse()
        nums[:k] = reversed(nums[:k])
        nums[k:] = reversed(nums[k:])
        