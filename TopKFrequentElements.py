class Solution(object):
    def topKFrequent(self, nums, k):
        
        a = Counter(nums)
        
        b = sorted(a.items(), key = lambda x : x[1], reverse = True)
        
        result = []
        
        
        p = 0
        
        for i in range(k):
            
            result.append(b[p][0])
            p = p + 1
                
                
        
        return result