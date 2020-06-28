class Solution {
public:
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>> grid(m, vector<int>(n, 0));
        
        grid[0][0] = 1;
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(i > 0 && j > 0)
                {
                    grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
                }
                
                if(i == 0 && j > 0)
                {
                    grid[i][j] = grid[i][j - 1];
                }
                
                if(j == 0 && i > 0)
                {
                    grid[i][j] = grid[i - 1][j];
                }
                
                cout << grid[i][j] << " ";
            }
            
            cout << endl;
            
        }
        
        return grid[m - 1][n - 1];
        
    }
};