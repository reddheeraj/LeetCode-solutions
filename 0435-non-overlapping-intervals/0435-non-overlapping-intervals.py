class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key=lambda x: x[1])
        res = 0
        last = intervals[0][1]

        for j in range(1, len(intervals)):
            if intervals[j][0] < last:
                res += 1
            else:
                last = intervals[j][1]
        
        return res
        