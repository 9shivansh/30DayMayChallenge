class Solution:
    def frequencySort(self, s: str) -> str:
        
        a = {}
        
        for char in s:
            
            if char in a:
                
                a[char] = a[char] + 1
                
            else:
                
                a[char] = 1
                
                
        # we need to sort dictionary by values:
        
        answer = ""
        
        aSorted = sorted(a.items(), reverse = True, key=lambda kv: kv[1])
        
        
        #print(aSorted)
        
        for key, value in aSorted:
            
            #print(key, value)
            
            for i in range(0, value):
                
                answer = answer + key
        
        
        return answer
        