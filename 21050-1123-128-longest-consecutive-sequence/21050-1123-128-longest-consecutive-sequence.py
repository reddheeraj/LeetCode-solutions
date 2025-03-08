import heapq
class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0

        heapq.heapify(nums)
        prev_ele = heapq.heappop(nums)
        count = 1
        max_count = 1
        while nums:
            top = heapq.heappop(nums)
            if abs(top - prev_ele) == 1:
                count += 1
                prev_ele = top
            elif abs(top - prev_ele) == 0:
                continue
            else:
                count = 1
                prev_ele = top
            print("count = ", count)
            max_count = max(max_count, count)
            
        return max_count
