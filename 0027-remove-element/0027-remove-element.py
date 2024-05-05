class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        for (i, v) in list(enumerate(nums)):
            if v == val:
                nums.remove(v)
        return len(nums)