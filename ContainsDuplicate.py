class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        
        a = {}
        
        for i in range(len(nums)):
            
            if nums[i] in a:
                
                if(i - a[nums[i]] <= k):
                    
                    return True
                
            a[nums[i]] = i
        
        return False
            
            