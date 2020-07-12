class Solution:
    def findRestaurant(self, list1: List[str], list2: List[str]) -> List[str]:
        
        dic1 = {}
        dic2 = {}
        #dic3 = {}
        
        result = []
        minimum = float('inf')
        
        length1 = len(list1)
        length2 = len(list2)
        
        for i in range(length1):
            
            dic1[list1[i]] = i
        
        
        for i in range(length2):
            
            dic2[list2[i]] = i
        
        
        
        for word in list1:
                
                if word in dic2:
                    
                    total = dic1[word] + dic2[word]
                    
                    if(total < minimum):
                        
                        result = []
                        result.append(word)
                        minimum = total
                    
                    elif(total == minimum):
                        
                        result.append(word)
        
        
        return result
        
        