class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int size = prices.size();
        
        int sum = 0;
        
        for(int i = 1; i < size; i++)
        {
            if(prices[i] - prices[i - 1] > 0)
            {
                cout << prices[i] << " " << prices[i - 1] << endl;
                sum = sum + (prices[i] - prices[i - 1]);
            }
        }
        
        return sum;
    }
};