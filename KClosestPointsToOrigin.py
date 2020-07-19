class Solution(object):
    def kClosest(self, points, K):
        """
        :type points: List[List[int]]
        :type K: int
        :rtype: List[List[int]]
        """
        dic = {}
        
        result = []
        
        for i in range(len(points)):
            
            a = pow(points[i][0], 2)
            b = pow(points[i][1], 2)
            
            dist = pow(a + b, 0.5)
            #print(dist)
            
            
            dic[i] = dist
        
        temp = sorted(dic.items(), key = lambda x : x[1])
        #print(temp)
        
        for i in range(K):
            
            temp1 = points[temp[i][0]]
            result.append(temp1)
        
        return result
            