class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        
        a = {}
        
        for num in nums:
            
            if num in a:
                
                return num
            
            else:
                
                a[num] = 1
        
        return -1
            
        