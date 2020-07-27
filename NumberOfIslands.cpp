class Solution {
public:
    int numIslands(vector<vector<char>>& grid) 
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
        
        int count = 0;
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(grid[i][j] == '1')
                {
                    count = count + 1;
                    dfs(grid, i, j);
                }
            }
        }
        
        return count;
        
    }
    
    
    void dfs(vector<vector<char>>& grid, int i, int j)
    {
        if(i < 0 || i > grid.size() - 1 || j < 0 || j > grid[0].size() - 1 || grid[i][j] == '0')
        {
            return;
        }
        
        grid[i][j] = '0';
        
        dfs(grid, i + 1, j);
        
        dfs(grid, i - 1, j);
        
        dfs(grid, i, j + 1);
        
        dfs(grid, i, j - 1);
    }
};