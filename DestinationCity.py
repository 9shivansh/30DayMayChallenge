class Solution:
    def destCity(self, paths: List[List[str]]) -> str:
        
        a = {}
        
        for city1, city2 in paths:
            if city1 in a:
                a[city1] = a[city1] - 1
            else:
                a[city1] = -1
            
            
            if city2 in a:
                a[city2] = a[city2] + 1
            else:
                a[city2] = 1
        
        
        
        for key, value in a.items():
            if(value > 0):
                return key
            
            
        
        