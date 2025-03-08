class Solution:
    def wordBreak(self, s: str, wordDict: List[str]) -> bool:
        memo = {}
        def helper(s, wordDict):
            if s in memo:
                return memo[s]
            if s == "":
                memo[s] = True
                return memo[s]

            for word in wordDict:
                if s.startswith(word):
                    if helper(s[len(word):], wordDict):
                        memo[s] = True
                        return memo[s]
                        
            memo[s] = False
            return memo[s]
        helper(s, wordDict)
        return memo[s]
