class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        
        
        curr = [1]
        
        while rowIndex:
            
            last = curr
            
            agla = []
            
            for i in range(len(last) - 1):
                
                agla.append(last[i] + last[i + 1])
                
            curr = [1] + agla + [1]
            
            rowIndex = rowIndex - 1
            
        
        return curr