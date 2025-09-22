class Solution:
    def reverse(self, x: int) -> int:
        res = 0
        neg = False
        
        if x < 0:
            neg = True
            x = -x
        while x > 0:
            rem = x % 10
            res = res * 10 + rem
            x = x // 10
        
        if neg:
            res = -res
        
        if not -2**31 <= res <= 2**31 - 1:
            return 0
        else:
            return res
        
        