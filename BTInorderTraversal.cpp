class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        
        
        
        int row = grid.size();
        int col = grid[0].size();
        
        
        queue<pair<int, int>> que;
        int countFresh = 0;
        
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(grid[i][j] == 2)
                {
                    que.push({i, j});
                }
                
                if(grid[i][j] == 1)
                {
                    countFresh = countFresh + 1;
                }
            }
        }
        
        if(que.size() == 0)
        {
            if(countFresh > 0)
            {
                return -1;
            }
            else
            {
                return 0;
            }
        }
        
        vector<pair<int, int>> directions;
        
        directions.push_back({1, 0});
        
        directions.push_back({-1, 0});
        
        directions.push_back({0, 1});
                
        directions.push_back({0, -1});
    
        int count = 0;
        
        
        while(!que.empty())
        {
            count = count + 1;
            int size = que.size();
            
            for(int i = 0; i < size; i++)
            {
                int x = que.front().first;
                int y = que.front().second;
                que.pop();
                
                cout << x << " " << y << endl;
                
                for(int k = 0; k < 4; k++)
                {
                    int a = x + directions[k].first;
                    int b = y + directions[k].second;
                    
                    if(a >= 0 && a < row && b >= 0 && b < col && grid[a][b] == 1)
                    {
                        //cout << a << " " << b << endl;
                        
                        grid[a][b] = 2;
                        que.push({a, b});
                        countFresh = countFresh - 1;
                        
                    }
                    
                }
                
                
                
                cout << "------------" << endl;
                
            }
        }
        
        if(countFresh > 0)
        {
            return -1;
        }
        
        return count - 1;
        
        
        
    }
};