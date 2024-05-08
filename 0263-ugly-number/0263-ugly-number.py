class Solution:
    def isUgly(self, n: int) -> bool:
        def recur(n):
            if n == 1:
                return 1
            if n == 0:
                return 0

            for i in [2,3,5]:
                if n%i == 0: return recur(n//i)

            return 0
        
        return recur(n)
            