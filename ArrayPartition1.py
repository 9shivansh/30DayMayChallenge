class Solution(object):
    def arrayPairSum(self, A):
        return sum(sorted(A)[::2])
        
