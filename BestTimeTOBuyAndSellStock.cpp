class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int size = prices.size();
        
        vector<int> right(size);
        
        int maxProf = 0;
        
        for(int i = size - 1; i > -1; i--)
        {
            if(i == size - 1)
            {
                right[i] = -1;
            }
            
            else
            {
                right[i] = max(right[i + 1], prices[i + 1]);
                cout << right[i] << " ";
            
                
            }
            
            maxProf = max(right[i] - prices[i], maxProf);
            
            
        }
        
        return maxProf;
        
    }
};