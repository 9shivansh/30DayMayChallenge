class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int size = nums.size();
        vector<int> dp(size, 1);
        
        if(size == 0)
        {
            return 0;
        }
        
        for(int i = 0; i < size; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(nums[j] < nums[i])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        
        int maximum = INT_MIN;
        
        
        for(int i = 0; i < size; i++)
        {
            maximum = max(maximum, dp[i]);
        }
        
        return maximum;
        
    }
};