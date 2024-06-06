def is_vowel(s):
    if s in ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']:
        return True
    return False

class Solution:
    def reverseVowels(self, s: str) -> str:
        res_li = []
        for i in range(len(s)-1, -1, -1):
            if is_vowel(s[i]):
                res_li.append(s[i])
        if len(res_li) == 0:
            return s
        for i in range(len(s)):
            if is_vowel(s[i]):
                s = s[:i] + res_li[0] + s[i+1:]
                res_li.pop(0)
        return s