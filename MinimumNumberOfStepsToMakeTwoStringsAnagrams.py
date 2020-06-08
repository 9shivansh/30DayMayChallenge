class Solution(object):
    def minSteps(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: int
        """
            
        
        a = Counter(s)
        present = 0
        abesant = 0
        
        
        for char in t:
            
            if char in a:
                
                if a[char] > 0:
                    
                    present = present + 1
                    
                    a[char] = a[char] - 1
                
                else:
                    
                    abesant = abesant + 1
            else:
                
                abesant = abesant + 1
        
        
        return len(s) - present
        
        
        