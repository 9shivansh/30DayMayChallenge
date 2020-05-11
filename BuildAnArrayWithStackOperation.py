class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        length = len(target)
        
        result = []
        
        i = 0
        k = 1
        
        while(i < length and k < n + 1):
            if(target[i] == k):
                result.append("Push")
                i = i + 1
                k = k + 1
            else:
                if(target[i] > k):
                    result.append("Push")
                    result.append("Pop")
                    k = k + 1
    
        return result
        
                    
        