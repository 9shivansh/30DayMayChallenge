class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        
        length = len(p)
        lengthOG = len(s)
        
        result = []
        
        
        if(length > lengthOG):
            
            return result
        
        a = Counter(p)
        
        for i in range(0, lengthOG - length + 1):
            
            string = s[i: i + length]
            
            if(Counter(string) == a):
                
                result.append(i)
        
        return result