class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        if not intervals:
            return [newInterval]
        
        intervals.append(newInterval)
        intervals = sorted(intervals, key=lambda x: x[0])
        i, j = 0, 1
        count = 0
        n = len(intervals)
        while i < n:
            if j < n:
                while intervals[j][0] <= intervals[i][1]:
                    intervals[i][1] = max(intervals[j][1], intervals[i][1])
                    j += 1
                    if j >= n:
                        break
            intervals[count][0], intervals[count][1] = intervals[i][0], intervals[i][1]
            count += 1
            i = j
            j = j + 1
        return intervals[:count]
                
                