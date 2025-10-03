class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        intervals.append(newInterval)
        intervals.sort()
        i = 0
        for j in range(1, len(intervals)):
            if intervals[j][0] <= intervals[i][1]:
                intervals[i][1] = max(intervals[i][1], intervals[j][1])
            else:
                i += 1
                intervals[i] = intervals[j]
        return intervals[:i+1]