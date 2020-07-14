class Solution(object):
    def detectCapitalUse(self, word):
        """
        :type word: str
        :rtype: bool
        """
        a = word.lower()
        b = word.upper()
        
        
        if(word == a):
            
            return True
        
        if(word == b):
            
            return True
        
        for i in range(len(word)):
            
            if(word[i].isupper()):
                
                if(i != 0):
                    
                    return False
        
        return True