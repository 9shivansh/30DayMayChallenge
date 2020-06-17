class Solution(object):
    def maxEnvelopes(self, envelopes):
        
        
        envelopes = sorted(envelopes, key = lambda x:x[1])
        
        length = len(envelopes)
        
        if(length == 0):
            
            return 0
        
        dp = [1]*length
        
        for i in range(1, length):
            
            for j in range(0, i):
                
                if envelopes[j][0] < envelopes[i][0] and envelopes[j][1] < envelopes[i][1]:
                    
                    
                    dp[i] = max(dp[i], dp[j] + 1)
                    
        
        
        return max(dp)
        