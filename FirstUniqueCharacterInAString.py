class Solution(object):
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        a = {}
        
        for char in s:
            
            if char in a:
                
                a[char] = a[char] + 1
            
            else:
                
                a[char] = 1
                
        
        for i in range(len(s)):
            
            if a[s[i]] == 1:
                
                return i
        
        return -1