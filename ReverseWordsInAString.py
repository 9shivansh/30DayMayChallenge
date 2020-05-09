class Solution:
    def reverseWords(self, s: str) -> str:
        
        if(len(s) == 0):
            return s
        
        
        
        a = s.split()
        
        answer = ""
        
        for i in range(len(a) - 1, -1, -1):
            answer = answer + a[i] + " "
        
        
        return answer.strip()
            
                