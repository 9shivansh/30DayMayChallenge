class Solution:
    def repeatedNTimes(self, A: List[int]) -> int:
        
        a = {}
        
        for num in A:
            
            if num in a:
                
                return num
            else:
                
                a[num] = 1
                
        
        