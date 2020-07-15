class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col;
        vector<vector<int>> result;
        
        if(row)
        {
            col = matrix[0].size();
        }
        
        else
        {
            return result;
        }
        
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                bool a = pacific(matrix, i, j);
                bool b = atlantic(matrix, i, j);
                if(b)
                {
                    if(a)
                    {
                        result.push_back({i, j});
                    }
                }
            }
        }
        
        return result;
        
        
    }
    
    
    bool pacific(vector<vector<int>> grid, int i, int j)
    {
        int row = grid.size();
        int col = grid[0].size();
        
        vector<pair<int, int>> directions;
        directions.push_back({1, 0});
        directions.push_back({-1, 0});
        directions.push_back({0, 1});
        directions.push_back({0, -1});
        
        queue<pair<int, int>> que;
        
        que.push({i, j});
        
        
        while(!que.empty())
        {
            int x = que.front().first;
            int y = que.front().second;
            que.pop();
            
            int temp = grid[x][y];
            
            if(x == row - 1)
            {
                return true;
            }
            
            if(y == col - 1)
            {
                return true;
            }
            
            grid[x][y] = -1;
            
            
            for(int i = 0; i < 4; i++)
            {
                int a = x + directions[i].first;
                int b = y + directions[i].second;
                
                
                
                if(a > -1 && a < row && b > -1 && b < col && grid[a][b] <= temp && grid[a][b] != -1)
                {
                    que.push({a, b});
                }
            }
            
            //grid[x][y] = temp;
        }
        
        return false;
    }
    
    
    bool atlantic(vector<vector<int>> grid, int i, int j)
    {
        int row = grid.size();
        int col = grid[0].size();
        
        vector<pair<int, int>> directions;
        directions.push_back({1, 0});
        directions.push_back({-1, 0});
        directions.push_back({0, 1});
        directions.push_back({0, -1});
        
        queue<pair<int, int>> que;
        
        que.push({i, j});
        
        
        while(!que.empty())
        {
            int x = que.front().first;
            int y = que.front().second;
            que.pop();
            
            int temp = grid[x][y];
            
            if(x == 0)
            {
                return true;
            }
            
            if(y == 0)
            {
                return true;
            }
            
            grid[x][y] = -1;
            
            
            for(int i = 0; i < 4; i++)
            {
                int a = x + directions[i].first;
                int b = y + directions[i].second;
                
                
                
                if(a > -1 && a < row && b > -1 && b < col && grid[a][b] <= temp && grid[a][b] != -1)
                {
                    que.push({a, b});
                }
            }
            
           // grid[x][y] = temp;
        }
        
        return false;
    }
};