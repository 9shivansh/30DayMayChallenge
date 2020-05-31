class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int profit = 0;
        
        for(int i = 0; i < prices.size() - 1; i++)
        {
            if(prices[i] < prices[i + 1])
            {
                profit = profit + (prices[i + 1] - prices[i]);
                cout << profit;
            }
        }
        
        
        
        return profit;
    }
};


// we need to check the position where we can find the increasing graph
// all of the margins from first value of the increasing graph to the last value of the increasing graph will be accounted for profits on that day.