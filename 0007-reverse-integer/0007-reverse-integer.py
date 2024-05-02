import math
def rev_func(num):
    rev = 0
    while num > 0:
        rem = num % 10
        rev = rev * 10 + rem
        num = num // 10
    return rev

class Solution:
    def reverse(self, x: int) -> int:
        if x < 0:
            x = abs(x)
            num = -rev_func(x)
            if num < -math.pow(2, 31) or num > (math.pow(2, 31) - 1):
                return 0
            return num
        else:
            num = rev_func(x)
            if num < -math.pow(2, 31) or num > (math.pow(2, 31) - 1):
                return 0
            return num
            