class Solution:
    def findJudge(self, N: int, trust: List[List[int]]) -> int:
        
        a = {}
        
        for i in range(1, N + 1):
            a[i] = 0
        
        
        for i in trust:
            b = i
            a[b[1]] = a[b[1]] + 1
            a[b[0]] = a[b[0]] - 1
            
        
        for key, value in a.items():
            if value == N - 1:
                return key
        
        return -1
        
        
        
        
        
# create a dictionary, containing people from 1 to N(key value for the dictionary)
# Check for first Element for each of the list
# Increment the value of 1st element in the list
# traverse through the dictionary, whenever the calue id 0, that is the town judge, else return -1
