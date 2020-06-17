class Solution:
    def longestPalindrome(self, s: str) -> str:
        if not s:
            return ""
        l = 0
        i = 0
        while i < len(s):
            for j in range(i+1,len(s)+1):
                sub = s[i:j]
                if sub == sub[::-1] and len(sub) >= l:
                    ans = sub
                    l = len(ans)
            i += 1
        if ans:
            return ans
        else:
            return ""