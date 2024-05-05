class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        table = {}
        for (idx, val) in list(enumerate(nums)):
            if val not in table.keys():
                table[val] = idx
            else:
                nums.remove(val)
        return len(table.keys())