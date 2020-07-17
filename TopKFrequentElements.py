class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        
        a = {}
        
        for num in nums:
            
            if num in a:
                
                a[num] = a[num] + 1
            
            else:
                
                a[num] = 1
                
                
        temp = sorted(a.items(), key = lambda x : x[1], reverse = True)
        
        
        #print(temp)
        
        result = []
        
        for i in range(k):
            
            result.append(temp[i][0])
        
        return result