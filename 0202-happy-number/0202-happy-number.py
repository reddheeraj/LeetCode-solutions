def checker(n):
    sum = 0
    while n > 0:
        sum += (n % 10)**2
        n = n // 10
    return sum

class Solution:
    def isHappy(self, n: int) -> bool:
        while n > 9:
            n = checker(n)
            print(n)
        if n == 1 or n == 7:
            return True
        return False