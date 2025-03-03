class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_len = 0
        left = 0
        res = {}

        for right in range(len(s)):
            if s[right] in res:
                left = max(left, res[s[right]] + 1)

            res[s[right]] = right
            max_len = max(max_len, right-left+1)
        return max_len