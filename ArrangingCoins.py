class Solution:
    def arrangeCoins(self, n: int) -> int:
         
        if n == 0:
            
            return 0
        
        if n == 1:
            
            return 1
        
        for i in range(1, n + 1):
            
            total = (i * (i + 1)) // 2 
            
            #print(total)
            
            if(total > n):
                
                return i - 1
            
        