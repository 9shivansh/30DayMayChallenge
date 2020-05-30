class Solution:
    
    def decimalToBinary(self, i: int, string: str) -> str:
        
        if(i > 1):
            
            decimalToBinary(i // 2)
            
        
        string = string + str(i % 2)
        return string
            
            
            
    def hasAllCodes(self, s: str, k: int) -> bool:
       
    
        a = {}
        
        for i in range(0, len(s) - k + 1):
            
            if s[i:i + k] in a:
                
                a[s[i:i + k]] = a[s[i:i + k]] + 1
            
            else:
                
                a[s[i:i + k]] = 1
        
        
        #print(a)
        
        
        for i in range(0, pow(2, k)):
            
            string = str(bin(i))
            string = string[2:]
            
            if(len(string) < k):
                
                for i in range(len(string), k):
                    
                    string = '0' + string
            
            #print(string)
            if not string in a:
                
                return False
                
                
        return True
            
    