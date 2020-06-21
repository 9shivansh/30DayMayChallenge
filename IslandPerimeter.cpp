class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int row = grid.size();
        int col;
        
        if(row)
        {
            col = grid[0].size();
        }
        
        int perimeter = 0;
        
        queue<pair<int, int>> que;
        
        vector<pair<int, int>> directions;
        
        directions.push_back({1, 0});
        
        directions.push_back({0, -1});
        
        directions.push_back({0, 1});
        
        directions.push_back({-1, 0});
        
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(grid[i][j] == 1)
                {
                    
                        int count = 0;
                        for(int k = 0; k < 4; k++)
                        {
                            
                            int a = directions[k].first + i;
                            int b = directions[k].second + j;
                            
                            //cout << a << " " << b << endl;
                            
                            if(a > -1 && a < row && b > -1 && b < col && grid[a][b] == 1)
                            {
                                cout << a << " " << b << endl;
                                count = count + 1;
                            }
                            
        
                        }
                        
                        //cout << count << " ";
                        perimeter = perimeter + (4 - count);
                    }
                    
                    
                }
            }
        
        
        return perimeter;
        
    }
};