class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        
        result = []
        
        for i in range(0, len(nums), 2):
            freq = nums[i]
            val = nums[i + 1]
            
            for p in range(0, freq):
                result.append(val)
        
        
        return result