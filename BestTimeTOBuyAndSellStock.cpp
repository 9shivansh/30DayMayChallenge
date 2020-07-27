class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int size = prices.size();
        
        if(size < 2)
        {
            return 0;
        }
        
        int maxDiff = 0;
        
        vector<int> diff(size, 0);
        
        diff[size - 1] = -1;
        
        
        for(int i = size - 2; i > -1; i--)
        {
            diff[i] = max(prices[i + 1], diff[i + 1]);
            
            maxDiff = max(maxDiff, diff[i] - prices[i]);
        }
        
        return maxDiff;
    }
};