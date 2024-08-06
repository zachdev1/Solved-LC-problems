class Solution:
    def repeatedCharacter(self, s: str) -> str:
        res = set()
        
        for char in s:
            if char in res:
                return char
            res.add(char)