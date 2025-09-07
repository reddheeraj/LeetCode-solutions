from collections import Counter

class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        c1 = Counter(nums1)
        c2 = Counter(nums2)
        
        res = []
        for c in c1:
            if c in c2:
                res.extend([c] * min(c1[c], c2[c]))
        return res