class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        Stest = list(s.split())
        n = len(Stest)
        return len(Stest[n-1])