class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        res = {}
        for s in strs:
            check = tuple(sorted(s))
            
            if check in res:
                res[check].append(s)
            else:
                res[check] = [s]
        
        final_res = []
        for k,v in res.items():
            final_res.append(v)
        return final_res
            