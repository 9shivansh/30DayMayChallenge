class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        
        int grid[m + 1][n + 1];
        
        for(int i = 0; i < m + 1; i++)
        {
            for(int j = 0; j < n + 1; j++)
            {
                grid[i][j] = 0;
            }
        }
        
        grid[1][1] = 1;
        
        for(int i = 1; i < m + 1; i++)
        {
            for(int j = 1; j < n + 1; j++)
            {
                if(grid[i][j] != 1)
                {
                    grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
                }
            }
        }
        
        return grid[m][n];
        
    }
};