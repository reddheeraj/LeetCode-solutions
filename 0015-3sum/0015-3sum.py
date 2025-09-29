class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        nums.sort()
        for i in range(len(nums)):
            if nums[i] > 0:
                break
            if i > 0 and nums[i] == nums[i-1]:
                continue

            j = i + 1
            k = len(nums) - 1
            while j < k:
                sum_ = nums[i] + nums[j] + nums[k]
                if sum_ == 0:
                    res.append([nums[i],nums[j],nums[k]])
                    j += 1
                    k -= 1

                    while j < k and nums[j] == nums[j-1]:
                        j += 1
                    while j < k and nums[k] == nums[k+1]:
                        k -= 1
                else:
                    if sum_ > 0:
                        k -= 1
                    if sum_ < 0:
                        j += 1
        
        return res
                
        