class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        
        res = []
        for row in range(numRows):
            #The digits of 11**0, ..., 11**4 are the same as the values in rows 0 through 4
            if row <= 4:
                res.append([int(i) for i in str(11**row)])
                continue
            
            #Afterwards, initialize the row as all ones since the first and last value will always be 1
            temp = [1]*(row+1)
            
            #Then fill in indices 1 through -2 with the sum of the two values directly above it
            for col in list(range(1,row)):
                temp[col] = res[row-1][col-1] + res[row-1][col]
                
            res.append(temp)
                    
        return res