class Solution:
    def isPalindrome(self, x: int) -> bool:
        n = x*1
        rev = 0
        while (n > 0):
            val = n % 10
            rev = rev * 10 + val
            # print("rev = ", rev)
            n = n // 10
        if rev == x:
            return True
        # print(rev, x)
        return False
        