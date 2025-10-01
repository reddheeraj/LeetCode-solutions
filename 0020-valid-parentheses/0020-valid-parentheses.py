class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        lookup = {")":"(", "}":"{", "]":"["}

        for char in s:
            if char not in lookup:
                stack.append(char)
            else:
                if stack:
                    top = stack[-1]
                    if top == lookup[char]:
                        stack.pop()
                    else:
                        return False
                else:
                    return False
        
        if stack:
            return False
        else:
            return True
        
