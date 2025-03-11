import heapq

class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        heap = []

        for num in nums:
            heapq.heappush(heap, (-num, num))

        res = 0
        while k:
            res = heapq.heappop(heap)
            k -= 1
        
        return res[1]