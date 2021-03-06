class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        
        a = {}
        
        for num in nums:
            
            if num in a:
                
                a[num] = a[num] + 1
            
            else:
                
                a[num] = 1
                
        for k, v in a.items():
            
            if(v >= len(nums) / 2):
                
                return k;
        