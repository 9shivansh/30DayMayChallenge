class Solution(object):
    def groupAnagrams(self, strs):
        
        
        a = {}
        
        for word in strs:
            
            string = ''.join(sorted(word))
            #print(string)
            
            if string in a:
                
                a[string].append(word)
            
            else:
                
                a[string] = [word]
            
            
        
        result = []
        for key, values in a.items():
            
            result.append(values)
        
        return result
        
        