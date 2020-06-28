class Solution {
public:
    int numSquares(int n) 
    {
        if(n < 4)
        {
            return n;
        }
        
        vector<int> temp(n + 1, 0);
        
        
        for(int i = 0; i < n + 1; i++)
        {
            temp[i] = i;
            if(i > 3)
            {
                for(int j = 1; j * j <= i; j++)
                {
                    temp[i] = min(temp[i], 1 + temp[i - j* j]);
                }
            }
            
        }
        
        return temp[n];
        
        
        
    }
};