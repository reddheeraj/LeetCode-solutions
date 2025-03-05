from collections import Counter, defaultdict

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        table = {}
        ans = []
        if not strs:
            return []

        for st in strs:
            modif_st = "".join(sorted(list(st)))
            if modif_st not in table:
                table[modif_st] = [st]
            else:
                table[modif_st].append(st)
        
        for value in table.values():
            ans.append(value)
        return ans

