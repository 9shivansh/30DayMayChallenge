class Solution:
    def findLucky(self, arr: List[int]) -> int:
        
        a = {}
        maximum = -1
        for num in arr:
            if num in a:
                a[num] = a[num] + 1
            else:
                a[num] = 1
        
        for key, value in a.items():
            if key == value:
                
                if(key > maximum):
                    maximum = key
                
        
        return maximum
        