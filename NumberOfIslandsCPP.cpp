class Solution {
public:
    
    void markArea(vector<vector<char>>& grid, int i, int j)
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != '1')
        {
            return;
        }
        
        else
        {
            grid[i][j] = 'v';
            markArea(grid, i - 1, j);
            markArea(grid, i, j - 1);
            markArea(grid, i + 1, j);
            markArea(grid, i, j + 1);
        }
    }
    
    
    
    int numIslands(vector<vector<char>>& grid) 
    {
        int count = 0;
        for(int m = 0; m < grid.size(); m++)
        {
            for(int n = 0; n < grid[0].size(); n++)
            {
                if(grid[m][n] == '1')
                {
                    count = count + 1;
                    markArea(grid, m, n);
                }
            }
        }
        
        
        return count;
    }
};


// traverse oer the grid and find one
// whenever 1 is found, increase the count by 1, check if its neighbour also has 1
// mark all of them to -1
// whenever 1 is found again, follow the same step




