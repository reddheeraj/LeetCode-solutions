class Solution:
    def countSubstrings(self, s: str) -> int:
        palis = [0]
        def track_pali(l, r):
            while l >= 0 and r < len(s) and s[l] == s[r]:
                l -= 1
                r += 1
                palis[0] += 1
        
        for i in range(len(s)):
            track_pali(i,i)
            track_pali(i,i+1)
        return palis[0]