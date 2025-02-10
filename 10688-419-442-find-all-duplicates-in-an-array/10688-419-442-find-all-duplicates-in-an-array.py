class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        output = []
        for i in range(len(nums)):
            if nums[abs(nums[i])-1] < 0:
                output.append(abs(nums[i]))
            nums[abs(nums[i])-1] *= -1
            # print(nums)
        return output
