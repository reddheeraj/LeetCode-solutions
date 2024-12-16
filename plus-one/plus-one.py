class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num = ""
        res = []
        for i in digits:
            num += str(i)
        num = int(num) + 1
        while num > 0:
            res.append(num % 10)
            num = num//10
        return res[::-1]
        