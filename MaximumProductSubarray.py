class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        maximum = curMax = curMin = nums[0]
        for i in range(1,len(nums)):
            c = curMax
            curMax = max(nums[i], max(c*nums[i], curMin*nums[i]))
            curMin = min(nums[i], min(c*nums[i], curMin*nums[i]))
            maximum = max(curMax, maximum)
        return maximum