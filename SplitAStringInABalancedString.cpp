class Solution:
    def balancedStringSplit(self, s: str) -> int:
        countL = 0
        countR = 0
        totalCount = 0
        
        
        for char in s:
            if(char == 'L'):
                countL = countL + 1
            if(char == 'R'):
                countR = countR + 1
            
            if(countL == countR):
                
                totalCount = totalCount + 1
                countL = 0
                countR = 0
        
        return totalCount
                