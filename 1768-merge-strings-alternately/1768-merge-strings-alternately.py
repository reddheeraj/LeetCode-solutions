class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        n = (len(word1) + len(word2))
        res = ""
        for i in range(n+1):
            try:
                res += word1[i]
            except:
                pass
            try:
                res += word2[i]
            except:
                pass
        return res