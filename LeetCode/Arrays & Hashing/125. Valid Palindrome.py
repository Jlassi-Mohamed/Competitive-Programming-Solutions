class Solution:
    def isPalindrome(self, s: str) -> bool:
        res = ''.join(c for c in s if c.isalnum()).lower()
        #print(res) 
        st = 0
        end = len(res)-1
        while st < end:
            if res[st] != res[end]:
                return False
            st+=1
            end-=1
        
        return True
