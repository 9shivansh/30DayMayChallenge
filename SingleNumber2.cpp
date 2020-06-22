class Solution(object):
    def singleNumber(self, nums):
        
        a = {}
        
        
        for i in nums:
            
            if i in a:
                
                a[i] = a[i] + 1
            
            else:
                
                a[i] = 1
                
                
        for key, values in a.items():
            
            if(values == 1):
                
                return key
        
        