class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        a = s.split()
        
        
        result = ""
        
        for word in a:
            
            temp = list(word)
            
            size = len(temp)
            
            for i in range(size // 2):
                
                temp[i], temp[size - 1 - i] = temp[size - 1 - i], temp[i]
            
            
            
            tempWord = ''.join(c for c in temp)
            
            result = result + tempWord
            result = result + " "
        
        
        return result.strip()