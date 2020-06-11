class Solution(object):
    def numJewelsInStones(self, J, S):
        
        
        a = {}
        count = 0
        
        
        for i in range(len(J)):
            
            a[J[i]] = 1
        
        
        for i in range(len(S)):
            
            if(S[i] in a):
                
                count = count + 1
        
        
        return count