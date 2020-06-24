class Solution:
    def rob(self, nums: List[int]) -> int:
        if not nums:
            return 0
        
        n = len(nums)
        
        if n == 1:
            return nums[0]
        
        if n == 2:
            return max(nums)
        
        dp = [nums[0], max(nums[:2])] 
        
        for i in range(2, n):
            dp.append(max(dp[i-2]+nums[i], dp[i-1]))
        
        return dp[-1]