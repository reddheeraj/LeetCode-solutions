class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        i = 0
        for j in range(len(nums)):
            print("j = ", j)
            if nums[j] != 0:
                nums[i], nums[j] = nums[j], nums[i]
                i += 1
            if nums[j] == 0:
                j += 1
            else:
                j += 1