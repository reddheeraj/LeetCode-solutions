class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        res = {}
        for i in range(len(nums)):
            if target - nums[i] in list(res.keys()):
                # print("nums[i] = ", nums[i])
                # print("target - nums[i]= ", target - nums[i])
                return res[target-nums[i]], i
                # return res[nums[i]], res[target-nums[i]]
                  
            res[nums[i]] = i
        print(res)    
        