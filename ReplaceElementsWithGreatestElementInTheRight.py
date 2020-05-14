class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        
        
        if(len(arr) == 0):
        
            return arr
        
    
        if(len(arr) == 1):
        
            arr[0] = -1
            return arr
        
    
    
        maximum = arr[len(arr) - 1]
        
        for i in range(len(arr) - 2, -1, -1):
            
            p = maximum
            if(arr[i] > maximum):
                
                maximum = arr[i]
            
            arr[i] = p
        
        
        arr[len(arr) - 1] = -1
        
        return arr
                
                
                
            
        