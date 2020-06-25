class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        a = Counter(s)
        b = Counter(t)
        
        
        
        if(a == b):
            
            return True
        
        return False