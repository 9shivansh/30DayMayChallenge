class Solution:
    def firstUniqChar(self, s: str) -> int:
        a = {}
        if(len(s) == 0):
            return -1
        if(len(s) == 1):
            return 0
        for c in s:
            if c in a:
                a[c] = 0
            else:
                a[c] = 1
        
        flag = 0
        for key,value in a.items():
            if(value == 1):
                c = key
                flag = 1
                break
        
        if(flag == 0):
            return -1
        
        return s.index(c)
        