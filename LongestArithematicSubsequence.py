class Solution(object):
    def longestArithSeqLength(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        a = [{} for num in A]
        
        maximum = 0
        
        
        
        for i in range(1, len(A)):
            
            for j in range(0, i):
                
                diff = A[i] - A[j]
                
                #print(diff)
                
                if diff in a[j]:
                    
                    a[i][diff] = a[j][diff] + 1
                
                else:
                    
                    a[i][diff] = 2
            
                
                maximum = max(maximum, a[i][diff])
       
        return maximum
    