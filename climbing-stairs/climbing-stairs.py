class Solution:
    def climbStairs(self, n: int) -> int:
        dp = {0:1, 1:1}
        
        def helper(n, dp):
            
            if n in list(dp.keys()):
                return dp[n]
            elif n == 0 or n == 1:
                return 1
        
            res = helper(n-1, dp) + helper(n-2, dp)
            dp[n] = res
            return res
        return helper(n, dp)
        
        
        
        
        
        