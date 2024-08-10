class Solution:
    def isPalindrome(self, s: str) -> bool:
        
        news = re.sub(r'[^a-zA-Z0-9]', '', s).lower()
        
        if news == " ":
            return True
        
        start = 0
        end = len(news)-1
        
        while start <= end:
            if news[start] == news[end]:
                start += 1
                end -= 1
            else:
                return False
        return True
        
        