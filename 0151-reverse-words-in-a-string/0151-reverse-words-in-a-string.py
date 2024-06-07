class Solution:
    def reverseWords(self, s: str) -> str:
        s = s.strip().split(" ")
        s = [it for it in s if it != '']
        s.reverse()
        return " ".join(s)