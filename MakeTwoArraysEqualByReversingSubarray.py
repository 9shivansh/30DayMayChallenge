class Solution:
    def canBeEqual(self, target: List[int], arr: List[int]) -> bool:
        
        copy = sorted(arr)
        
        copy2 = sorted(target)
        
        
        if(len(copy) != len(copy2)):
            
            return False
        
        for i in range(len(copy)):
            
            if copy[i] != copy2[i]:
                
                return False
        
        return True
        
            
                
                
        