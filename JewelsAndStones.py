class Solution(object):
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        
        count = 0
        
        dic = {}
        
        for i in J:
            
            dic[i] = 1
        
        for i in S:
            
            if i in dic:
                
                count = count + 1
                
        return count