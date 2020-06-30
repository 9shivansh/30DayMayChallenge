class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) 
    {
        int row = board.size();
        int col = board[0].size();
        
        
        
        vector<vector<int>> grid(row, vector<int>(col, 0));
        
        vector<pair<int, int>> directions;
        directions.push_back({1, 0});
        directions.push_back({0, 1});
        directions.push_back({1, 1});
        directions.push_back({-1, -1});
        directions.push_back({1, -1});
        directions.push_back({-1, 0});
        directions.push_back({0, -1});
        directions.push_back({-1, 1});
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                int count = 0;
                
                
                for(int k = 0; k < 8; k++)
                {
                    int a = i + directions[k].first;
                    int b = j + directions[k].second;
                    
                    //cout << a << " " << b << endl;
                    //cout << "----------------------" << endl;
                    
                    if(a > -1 && a < row && b > -1 && b < col && board[a][b] == 1)
                    {
                        count = count + 1;
                    }
                }
                        
                    if(board[i][j] == 1)
                    {
                        if(count < 2)
                        {
                            grid[i][j] = 0;
                        }
                        
                        if(count == 2 || count == 3)
                        {
                            grid[i][j] = 1;
                        }
                        
                        if(count > 3)
                        {
                            grid[i][j] = 0;
                        }
                    }
                    
                    if(board[i][j] == 0)
                    {
                        if(count == 3)
                        {
                            grid[i][j] = 1;
                        }
                    }
                    
            }
        }
        
        board = grid;
        
    }
};