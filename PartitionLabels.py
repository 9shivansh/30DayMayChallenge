class Solution(object):
    def partitionLabels(self, S):
        """
        :type S: str
        :rtype: List[int]
        """
        dic = {}
        for i, c in enumerate(S):
            dic[c] = i
        
        cur_max = 0
        res = []
        count = 0
        
        for i, c in enumerate(S):
            count += 1
            cur_max = max(cur_max, dic[c])
            
            if cur_max == i:
                res.append(count)
                count = 0
        return res