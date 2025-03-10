class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        m, n = len(text1), len(text2)
        memo = [[-1 for _ in range(n+1)] for _ in range(m+1)]

        def helper(s1, s2, i, j):
            if memo[i][j] < 0:
                if i == len(s1) or j == len(s2):
                    memo[i][j] = 0
                elif s1[i] == s2[j]:
                    memo[i][j] = 1 + helper(s1, s2, i+1, j+1)
                else:
                    memo[i][j] = max(helper(s1, s2, i+1, j), helper(s1, s2, i, j+1))
            return memo[i][j]
        return helper(text1, text2, 0, 0)

        # for row in range(1, m + 1):
        #         for col in range(1, n + 1):
        #             if s1[row - 1] == s2[col - 1]:
        #                 memo[row][col] = 1 + memo[row - 1][col - 1]
        #             else:
        #                 memo[row][col] = max(memo[row][col - 1], memo[row - 1][col])
    
        #     return memo[m][n]