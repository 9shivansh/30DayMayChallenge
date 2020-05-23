class Solution:
    def intervalIntersection(self, A: List[List[int]], B: List[List[int]]) -> List[List[int]]:
        la = len(A)
        
        lb = len(B)
        
        pa = 0
        
        pb = 0
        
        ret = []
        
        while pa<la and pb<lb:
            
            cr = [None,None]
            
            cr[0] = max(A[pa][0], B[pb][0])
            
            if A[pa][1]<=B[pb][1]:
                
                cr[1] = A[pa][1]
                
                pa+=1
                
            else:
                
                cr[1] = B[pb][1]
                
                pb+=1
                
            if cr[0]<=cr[1]: 
                
                ret.append(cr)
                
        return ret
            