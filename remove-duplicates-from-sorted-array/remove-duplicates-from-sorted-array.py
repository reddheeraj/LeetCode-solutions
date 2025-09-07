class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = j = k = 0
        while True:
            print(f"i = {i}, j = {j}, k = {k}")
            
            while nums[i] == nums[j]:
                j += 1
                if j >= len(nums):
                    return k+1
            while j != i+1:
                nums[j-1] = nums[j]
                j -= 1
            i += 1
            j += 1
            k += 1
            if j >= len(nums):
                return k+1
        