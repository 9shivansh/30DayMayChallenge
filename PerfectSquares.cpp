class Solution {
public:
    int numSquares(int n) 
    {
        vector<int> squares(n + 1, INT_MAX);
        
        if(n == 0)
        {
            return 0;
        }
        
        if(n == 1)
        {
            return 1;
        }
    
        squares[0] = 0;
        squares[1] = 1;
        
        for(int i = 2; i < n + 1; i++)
        {
            squares[i] = i;
            
            for(int j = 0; j * j <= i; j++)
            {
                
                squares[i] = min(squares[i], squares[i - (j * j)] + 1);
            }
        }
        
        return squares[n];
        
    }
};