class Solution:
    def findGCD(self, nums: List[int]) -> int:
        smallest = largest = nums[0]
        for i in range(len(nums)):
            if nums[i] < smallest:
                smallest = nums[i]
            if nums[i] > largest:
                largest = nums[i]
        return gcd(smallest, largest)
            