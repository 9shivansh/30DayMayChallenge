class Solution {
public:
    int numIslands(vector<vector<char>>& grid) 
    {
        int count = 0;
        
        
        int row = grid.size();
        int col;
        
        if(row)
        {
            col = grid[0].size();
        }
        
        
        vector<pair<int, int>> directions;
        directions.push_back({0, 1});
        directions.push_back({1, 0});
        directions.push_back({0, -1});
        directions.push_back({-1, 0});
        
        
        
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(grid[i][j] == '1')
                {
                    count = count + 1;
                    queue<pair<int, int>> que;
                    que.push({i, j});
                    
                    
                    while(!que.empty())
                    {
                        int x = que.front().first;
                        int y = que.front().second;
                        que.pop();
                        
                        for(int i = 0; i < 4; i++)
                        {
                            int a = x + directions[i].first;
                            int b = y + directions[i].second;
                            
                            
                            if(a > -1 && a < row && b > -1 && b < col && grid[a][b] == '1')
                            {
                                que.push({a, b});
                                grid[a][b] = '-';
                            }
                            
                        }
                    }
                }
            }
        }
        
        return count;
    }
};