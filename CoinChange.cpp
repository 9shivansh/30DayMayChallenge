class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        int size = coins.size();
        
        int sum = 0;
        
        
        vector<int> change(amount + 1, amount + 1);
        
        change[0] = 0;
        
        for(int i = 0; i < amount + 1; i++)
        {
            
            for(int j = 0; j < size; j++)
            {
                if(coins[j] <= i)
                {
                    change[i] = min(change[i], change[i - coins[j]] + 1);
                }
            }
        }
        
        if(change[amount] > amount)
        {
            return -1;
        }
        
        return change[amount];
        
    }
};