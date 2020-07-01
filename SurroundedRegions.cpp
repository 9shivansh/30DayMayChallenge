class Solution {
public:
    void solve(vector<vector<char>>& board) 
    {
        
        int row;
        int col;
        
        row = board.size();
        if(row)
        {
            col = board[0].size();
        }
        
        
        
        for(int i = 0; i < row; i++)
        {
            if(board[i][0] == 'O')
            {
                conversion(board, i, 0);
            }
            
            if(board[i][col - 1] == 'O')
            {
                conversion(board, i, col - 1);
            }
        }
        
        for(int j = 0; j < col; j++)
        {
            if(board[0][j] == 'O')
            {
                conversion(board, 0, j);
            }
            
            if(board[row - 1][j] == 'O')
            {
                conversion(board, row - 1, j);
            }
        }
        
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(board[i][j] == 'O')
                {
                    board[i][j] = 'X';
                }
                
                if(board[i][j] == '#')
                {
                    board[i][j] = 'O';
                }
            }
        }
        
    }
    
    
    void conversion(vector<vector<char>>& board, int i, int j)
    {
        int row = board.size();
        int col = board[0].size();
        
        board[i][j] = '#';
        
        
        vector<pair<int, int>> directions;
        directions.push_back({0, 1});
        directions.push_back({1, 0});
        directions.push_back({-1, 0});
        directions.push_back({0, -1});
        
        
        for(int k = 0; k < 4; k++)
        {
            int a = i + directions[k].first;
            int b = j + directions[k].second;
            
            
            if(a > -1 && a < row && b > -1 && b < col && board[a][b] == 'O')
            {
                board[a][b] = '#';
                conversion(board, a, b);
            }
            
        }
    }
};