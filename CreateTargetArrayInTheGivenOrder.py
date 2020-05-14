class Solution:
    def createTargetArray(self, nums: List[int], index: List[int]) -> List[int]:
        
        target = [None]*len(nums)
        for i in range(len(nums)):
            if(target[index[i]] == None):
                target[index[i]] = nums[i]
            else:
                target.insert(index[i], nums[i])
                target = target[:-1]
        
        
        
            
        return target
            
            
        