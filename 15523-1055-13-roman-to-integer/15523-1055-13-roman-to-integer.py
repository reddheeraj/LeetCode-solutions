class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        res = 0
        slist = list(s)
        for i in range(len(slist)-1):
            if slist[i] in roman:
                print("slist[i, i+1] = ", slist[i], slist[i+1])
                if roman[slist[i]] < roman[slist[i+1]]:
                    # res += roman[slist[i+1]] - roman[slist[i]] - roman[slist[i]]
                    res -= roman[slist[i]]
                else:
                    res += roman[slist[i]]
        
        res += roman[slist[-1]]
        return res