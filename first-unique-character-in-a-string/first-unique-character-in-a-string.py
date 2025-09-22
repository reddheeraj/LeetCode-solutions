from collections import OrderedDict
class Solution:
    def firstUniqChar(self, s: str) -> int:
        c = OrderedDict()
        for i in range(len(s)):
            if s[i] not in c:
                c[s[i]] = [i, 1]
            else:
                c[s[i]][1] += 1
        
        # print(c)
        for k,v in c.items():
            if v[1] == 1:
                return v[0]
            
        return -1