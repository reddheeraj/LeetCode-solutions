def add_digit(num):
    sum = 0
    while num > 0:
        sum += num % 10
        num = num // 10
    return sum

class Solution:
    def addDigits(self, num: int) -> int:
        if num < 9:
            return num
        while num > 9:
            num = add_digit(num)
        
        return num
        