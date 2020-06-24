class Solution(object):
    def findMaxLength(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        a = {}
        
        
        a[0] = -1
        
        total = 0
        
        maxLength = 0
        
        for i in range(len(nums)):
            
            if(nums[i] == 0):
                
                total = total + 1
            
            else:
                
                total = total - 1
                
            
            if total in a:
                
                length = i - a[total]
                maxLength = max(maxLength, length)
                
            else:
                
                a[total] = i
        
        return maxLength