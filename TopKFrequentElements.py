class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        length = len(nums)
        
        a = {}
        
        for i in range(length):
            
            if nums[i] in a:
                
                a[nums[i]] += 1
            
            else:
                
                a[nums[i]] = 1
        
        
        
        
        temp = sorted(a.items(), key = lambda x : x[1], reverse = True)
        
        result = []
        
        for i in range(k):
            
            result.append(temp[i][0])
        
        return result