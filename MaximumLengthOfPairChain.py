class Solution(object):
    def findLongestChain(self, pairs):
        """
        :type pairs: List[List[int]]
        :rtype: int
        """
        
        
        pairs = sorted(pairs, key = lambda x : x[0])
        
        length = len(pairs)

        if length == 0:
            
            return 0
        
        dp = [1] * length
        
        for i in range(1, length):
            
            for j in range(i):
                
                if(pairs[i][0] > pairs[j][1]):
                    
                    dp[i] = max(dp[i], dp[j] + 1)
                    
                   
        
        
        return max(dp)