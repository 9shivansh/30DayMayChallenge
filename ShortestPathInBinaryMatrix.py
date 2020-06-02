class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
        int row = grid.size();
        int col = grid[0].size();
        
        if(grid[0][0] == 1 || grid[row - 1][col - 1] == 1)
        {
            return -1;
        }
        
        queue<pair<int, int>> q;
        
        q.push({0, 0});
        grid[0][0] = 1;
        
        while(!q.empty())
        {
            pair<int, int> curr = q.front();
            q.pop();
            
            if(curr == make_pair(row - 1, row - 1))
            {
                return grid[row - 1][row - 1];
            }
            
            pair<int, int> directions[8] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}, {1, 1}, {1, -1}, {-1, 1}, {-1, -1}};
            
            for(int i = 0; i < 8; i++)
            {
                int x = curr.first + directions[i].first;
                int y = curr.second + directions[i].second;
                
                if(x >= 0 && x < row && y >= 0 && y < row && grid[x][y] == 0)
                {
                    q.push({x, y});
                    grid[x][y] = grid[curr.first][curr.second] + 1;
                }
            }
            
        }
        
        return -1;
        
    }
};