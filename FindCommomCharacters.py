class Solution:
    def commonChars(self, A: List[str]) -> List[str]:
        
        result = []
        a = Counter(A[0])
        
        for word in A:
            
            b = Counter(word)
            a = a & b
            
            
        for key, value in a.items():
            
            for i in range(0, value):
                
                result.append(key)
        
        
        return result
        
        
            
            
        