class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        
        result = []
        
        a = {}
        
        for num in nums:
            
            if num in a:
                
                result.append(num)
            
            else:
                
                a[num] = 1
        
        return result
        