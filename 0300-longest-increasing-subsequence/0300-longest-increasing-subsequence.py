import bisect 

class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        # memo = {}

        # def dfs(index, prev):
        #     key = (index, prev)
        #     if key in memo:
        #         return memo[key]

        #     if index == len(nums):
        #         return 0

        #     if nums[index] > prev:
        #         take = 1 + dfs(index+1, nums[index])
        #     else:
        #         take = 0
            
        #     skip = dfs(index + 1, prev)

        #     memo[key] = max(take, skip)
        #     return memo[key]

        # return dfs(0,float('-inf'))
        sub = []
        
        for num in nums:
            idx = bisect.bisect_left(sub, num)
            if idx == len(sub):
                sub.append(num)
            else:
                sub[idx] = num
        return len(sub)