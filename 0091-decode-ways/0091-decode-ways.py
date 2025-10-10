class Solution:
    def numDecodings(self, s: str) -> int:
        if s == "" or s[0] == '0':
            return 0

        dp = [0] * (len(s)+1)
        dp[0] = 1
        dp[1] = 1

        for i in range(2, len(s)+1):
            one = s[i-1]
            two = s[i-2:i]
            if int(one) in range(1, 10):
                dp[i] += dp[i-1]
            
            if int(two) in range(10, 27):
                dp[i] += dp[i-2]
        
        return dp[-1]