class Solution {
public:
    int numSquares(int n) 
    {
        vector<int> dp(n + 1, 0);
        
        for(int i = 0; i < n + 1; i++)
        {
            dp[i] = i;
            
            for(int j = 0; j * j <= i; j++)
            {
                dp[i] = min(dp[i], dp[i - j * j] + 1);
            }
        }
        
        return dp[n];
        
    }
};