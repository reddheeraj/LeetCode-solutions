class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        res1, res2 = {}, {}
        
        for i in s:
            if i not in res1:
                res1[i] = 1
            else:
                res1[i] += 1
                
        for i in t:
            if i not in res2:
                res2[i] = 1
            else:
                res2[i] += 1
        
        if res1 != res2:
            return False
        return True