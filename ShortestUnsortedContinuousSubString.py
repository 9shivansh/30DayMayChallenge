class Solution:
    def findUnsortedSubarray(self, nums: List[int]) -> int:
        
        count = 0
        nums2 = sorted(nums)
        Start = -1
        lastIndex = -1
        #print(nums)
        #print(nums2)
        for i in range(0, len(nums)):
            if(nums[i] != nums2[i]):
                if(Start == -1):
                    Start = i
                lastIndex = i
        
        #print(Start)
        #print(lastIndex)
        
        
        
        
        
        if(Start != -1 and lastIndex != -1):
            return (lastIndex - Start) + 1
        return 0
        