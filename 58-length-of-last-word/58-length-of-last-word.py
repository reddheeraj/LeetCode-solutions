class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        Stest = list(s.split())
        return len(Stest[len(Stest)-1])