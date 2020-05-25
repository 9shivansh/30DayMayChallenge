class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        
        a = {}
        
        b = {}
        
        result = []
        
        
        for i in nums1:
            
            if i in a:
                
                a[i] = a[i] + 1
            
            else:
                
                a[i] = 1
        
        
        for j in nums2:
            
            if j in b:
                
                b[j] = b[j] + 1
                
            else:
                
                b[j] = 1
        
        
        
        for key, value in a.items():
            
            if key in b:
                
                for i in range(0, min(value, b[key])):
                    
                    result.append(key)
        
        
        return result
        
        