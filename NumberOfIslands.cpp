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
        
        char marked = 'X';
        
        int count = 0;
        
        vector<pair<int, int>> v;
        
        v.push_back({-1, 0});
        v.push_back({0, -1});
        v.push_back({1, 0});
        v.push_back({0, 1});
        
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(grid[i][j] == '1')
                {
                    //cout << i << " " << j << endl;
                    count = count + 1;
                    
                    queue<pair<int, int>> que;
                    
                    grid[i][j] = '0';
                    que.push({i, j});
                    
                    
                    while(!que.empty())
                    {
                        int a = que.front().first;
                        int b = que.front().second;
                        
                        
                        que.pop();
                        
                        
                        for(int k = 0; k < 4; k++)
                        {
                            int m = a + v[k].first;
                            int n = b + v[k].second;
                            
                           
                            
                            if(m > -1 && m < row && n > -1 && n < col && grid[m][n] != '0')
                            {
                                cout << m << " " << n << endl;
                                que.push({m, n});
                                grid[m][n] = '0';
                            }
                            
                        }
                        
                    }
                }
            }
        }
        
        
        return count;
        
    }
};