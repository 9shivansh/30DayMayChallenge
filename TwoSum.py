class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        a = {}
        result = []
        for i in range(len(nums)):
            
            if target - nums[i] in a:
                
                result.append(a[target - nums[i]])
                result.append(i)
                return result
                
            else:
                
                a[nums[i]] = i
                
        return -1