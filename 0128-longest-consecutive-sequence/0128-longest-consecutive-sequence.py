import heapq 

class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if not nums:
            return 0
        
        # heapq.heapify(nums)

        # longest = 1
        # current_streak = 1
        # prev = heapq.heappop(nums)

        # while nums:
        #     curr = heapq.heappop(nums)

        #     if curr == prev:
        #         continue
        #     elif curr == prev + 1:
        #         current_streak += 1
        #         longest = max(longest, current_streak)
        #     else:
        #         current_streak = 1
            
        #     prev = curr
        # return longest

        ext = set(nums)
        longest_streak = 0
        for num in ext:
            # continue if num - 1 in set (we're trying to find the start of the sequence)
            if num - 1 not in ext:
                curr_num = num
                curr_streak = 1

                while curr_num + 1 in ext:
                    curr_num += 1
                    curr_streak += 1
                
                longest_streak = max(longest_streak, curr_streak)
        return longest_streak
                
