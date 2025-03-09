class Solution:
    def getSum(self, a: int, b: int) -> int:
        MASK = 0xffffffff
        
        while (b & MASK) > 0:
            carry = (a & b) << 1
            a = a ^ b
            b = carry
        return (a & MASK) if b > 0 else a