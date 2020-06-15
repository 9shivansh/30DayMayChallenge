class Solution {
public:
    int maximalSquare(vector<vector<char>>& grid) 
    {
        int row = grid.size();
        int col;
        
        if(row)
        {
            col = grid[0].size();
        }
        
        else
        {
            return 0;
        }
        
        int maximum = INT_MIN;
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(i == 0 || j == 0)
                {
                    maximum = max(grid[i][j] - '0', maximum);
                }
                
                if(i > 0 && j > 0)
                {
                    if(grid[i][j] == '1')
                    {
                        grid[i][j] = (min(min(grid[i - 1][j] - '0', grid[i][j - 1] - '0'), grid[i - 1][j - 1] - '0') + 1) + '0';
                        
                        maximum = max(maximum, grid[i][j] - '0');
                        
                    }
                }
                
                cout << grid[i][j] << " ";
                
            }
            
            cout << endl;
        }
        
        if(maximum == INT_MIN)
        {
            return 0;
        }
        
        return maximum * maximum;
        
    }
};