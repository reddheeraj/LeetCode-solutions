class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        max_prod = min_prod = ans = nums[0]
        n = len(nums)
        for i in range(1,n):
            temp = max_prod
            max_prod = max(nums[i], nums[i] * max_prod, min_prod * nums[i])
            min_prod = min(nums[i], nums[i] * temp, min_prod * nums[i])

            ans = max(ans, max_prod)
        
        return ans