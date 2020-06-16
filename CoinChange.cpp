class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        //unordered_map<int> mp;
        
        int size = coins.size();
        
        //minimum = INT_MAX;
        
        vector<int> dp(amount + 1, amount + 1);
        
        dp[0] = 0;
        
        
        
        for(int i = 0; i <= amount; i++)
        {
            for(int j = 0; j < size; j++)
            {
                if(coins[j] <= i)
                {
                    dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
                }
            }
        }
        
        
        if(dp[amount] == amount + 1)
        {
            return -1;
        }
        
        return dp[amount];
        
        
    }
};