class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num = 0
        r = 1
        i = len(digits) - 1
        while i >= 0:
            num = num + digits[i] * r
            r *= 10
            i -= 1
        num += 1
        # print(num)
        res = []
        while num > 0:
            res.append(num % 10)
            num = num // 10
        
        res.reverse()
        return res
            