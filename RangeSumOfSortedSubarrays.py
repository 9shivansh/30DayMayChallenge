class Solution(object):
    def rangeSum(self, nums, n, left, right):
        """
        :type nums: List[int]
        :type n: int
        :type left: int
        :type right: int
        :rtype: int
        """
        
        temp = []
        
        for i in range(len(nums)):
            
            total = 0
            
            for j in range(i, len(nums)):
                
                total = total + nums[j]
                
                temp.append(total)
                
                
        temp.sort()
        result = 0
        
        for i in range(left - 1, right):
            
            result = result + temp[i]
            
        return result % (pow(10, 9) + 7)