class Solution(object):
    def isAnagram(self, s, t):
        
        
        a = Counter(s)
        b = Counter(t)
        
        if(a == b):
            
            return True
        
        
        return False
        