class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        res = set()
        for i in nums:
            res.add(i)
        res = list(res)
        res.sort()
        for i in range(len(res)):
            nums[i] = res[i]
        
        return len(res)
    