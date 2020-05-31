class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        
        a = {}
        
        for num in nums:
            
            if num in a:
                
                a[num] = a[num] + 1
            
            else:
                
                a[num] = 1
                
                
                
        for key, value in a.items():
            
            if value == 1:
                
                return key
        
        
            
            
        