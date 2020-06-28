class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        
        a = {}
        
        for num in nums:
            
            if num in a:
                
                a[num] = a[num] + 1
            
            else:
                
                a[num] = 1
        
        
        result = sorted(a.items(), key = lambda x : x[1], reverse = True)
        
        answer = []
        
        for p in result:
            
            answer.append(p[0])
            
        return answer[:k]
        