class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int size = prices.size();
        
        int minimum = INT_MAX;
        
        int profit = INT_MIN;
        
        
        for(int i = 0; i < size; i++)
        {
            minimum = min(minimum, prices[i]);
            profit = max(prices[i] - minimum, profit);
        }
        
        if(profit == INT_MIN)
        {
            return 0;
        }
        
        return profit;
        
        
    }
};