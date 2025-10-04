class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        counter = collections.Counter(nums)
        heap = []

        for key, val in counter.items():
            heapq.heappush(heap, (-val, key))
        
        res = []
        while len(res) < k:
           res.append(heapq.heappop(heap)[1])
        return res 