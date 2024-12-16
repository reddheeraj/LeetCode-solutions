class Solution:
    def isPalindrome(self, s: str) -> bool:
        for i in s:
            if not i.isalnum():
                s = s.replace(i, "")
        s = s.lower()
        print(s)
        res = ""
        for i in s:
            res = i + res
        
        if res == s:
            return True
        return False