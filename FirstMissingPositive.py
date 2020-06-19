class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        
        a = {}
        maximum = 0
        
        
        for i in nums:
            
            if i > 0:
                
                a[i] = 1
                
                if(i > maximum):
                    
                    maximum = i
        
        print(a)
        print(maximum)
                
        for i in range(1, maximum + 1):
            
            if not i in a:
                
                return i
        
        return maximum + 1
            
            
            
        