class Solution(object):
    def uncommonFromSentences(self, A, B):
        
        s = {}
        result = []
        A = A.split()
        B = B.split()
        
        for word in A:
            
            if word in s:
                
                s[word] = s[word] + 1
            
            else:
                
                s[word] = 1
            
        
        for word in B:
            
            if word in s:
                
                s[word] = s[word] + 1
            
            else:
                
                s[word] = 1
        
        for key, value in s.items():
            
            if value == 1:
                
                result.append(key)
            
        return result